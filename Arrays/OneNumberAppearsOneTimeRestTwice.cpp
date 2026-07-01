// Problem: One number appears One time rest Twice 
 
#include<bits/stdc++.h>
using namespace std;
void mineappearone(vector<int> &arr,int n)
{
    unordered_map <int,int> mp;
    for(int x:arr)
    mp[x]++;
    int once=INT_MIN;
    for(auto i:mp)
    {
        if(i.second==1)
        {
            once=i.first;
            break;
        }
    }
    if(once!=INT_MIN)
    cout<<"No.appeared once : "<<once;
    else
    cout<<"No no. appeared once";
}
void striverappearonexor(vector<int> &arr,int n)
{
    int ans=0;
    for(int i:arr)
    ans ^= i;
    if(ans!=0)
    cout<<"No.appeared once : "<<ans;
    else
    cout<<"No no. appeared once";

}
int main()
{
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    mineappearone(arr,n);
    striverappearonexor(arr,n);
}
