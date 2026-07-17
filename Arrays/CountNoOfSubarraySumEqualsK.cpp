// Problem: Count no. of Subarray sum Equals K

#include<bits/stdc++.h>
using namespace std;
void countsubarray(vector<int> &arr,int n,int k)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            c++;
        }
    }
    cout<<"No. of Subarray with sum "<<k<<" : "<<c;
}
void countsubarraymap(vector<int> &arr,int n,int k)
{
    unordered_map<int,int> mp;
    int sum=0;
    int c=0;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        int rem=sum-k;
        c+=mp[rem];
        mp[sum]++;
    }
    cout<<"No. of Subarray with sum "<<k<<" : "<<c;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int k;
    cin>>k;
    countsubarray(arr,n,k);
    countsubarraymap(arr,n,k);
}
