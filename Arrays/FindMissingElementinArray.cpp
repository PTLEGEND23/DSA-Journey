// Problem: Find Missing Element in Array
 
#include<bits/stdc++.h>
using namespace std;
void missingelement(vector<int> &a,int n)
{
    vector<int> vec;
    for(int i=1;i<n+1;i++)
    vec.push_back(i);
    for(int x:a)
    {
        auto i=find(vec.begin(),vec.end(),x);
        if(i!=vec.end())
        vec.erase(i);
    }
    for(int x:vec)
    cout<<"Missing element : "<<x;
}
void missingelementhash(vector<int> &a,int n)
{
    vector<int> hashh(n+1,0);
    for(int x:a)
    hashh[x]++;
    for(int i=1;i<=n;i++)
    {
        if(hashh[i]==0)
        {
            cout<<"Missing element : "<<i;
            break;
        }
    }
}
void missingelementsum(vector<int> &a,int n)
{
    int ogsum=(n*(n+1))/2;
    int tempsum=0;
    for(int x:a)
    tempsum+=x;
    cout<<"Missing Element : "<<ogsum-tempsum;
}
int main()
{
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n-1;i++)
    {
        int value;
        cin>>value;
        a.push_back(value);
    }
    missingelement(a,n);
    missingelementhash(a,n);
    missingelementsum(a,n);
}
