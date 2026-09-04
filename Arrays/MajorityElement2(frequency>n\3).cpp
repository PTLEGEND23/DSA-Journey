// Problem: Majority Element 2(frequency>n/3)

#include <bits/stdc++.h>
using namespace std;
void majorityelement2mine(int n,vector<int> &arr)
{
    unordered_map<int,int> mp;
    for(int i:arr)
    mp[i]++;
    for(const auto &x:mp)
    {
        if(x.second>n/3)
        cout<<x.first<<" ";
    }
}
void majorityelement2optimal(int n,vector<int> &arr)
{
    int c1=0,c2=0;
    int ele1=INT_MIN,ele2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if (arr[i] == ele1) {
            c1++;
        } else if (arr[i] == ele2) {
            c2++;
        } else if (c1 == 0) {
            ele1 = arr[i];
            c1 = 1;
        } else if (c2 == 0) {
            ele2 = arr[i];
            c2 = 1;
        } else {
            c1--;
            c2--;
        }
    }
    c1=0,c2=0;
    for(int x:arr)
    {
        if(x==ele1)
        c1++;
        else if(x==ele2)
        c2++;
    }
    cout<<"Majority Elements (>n/3) : ";
    if(c1>n/3)
    cout<<ele1<<" ";
    if(c2>n/3)
    cout<<ele2<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    // majorityelement2mine(n,arr);
    majorityelement2optimal(n,arr);
}
