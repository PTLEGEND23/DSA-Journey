// Problem: Two Sum
 
#include<bits/stdc++.h>
using namespace std;
void minetwosum(vector<int> &arr,int n,int k)
{
    int i1=-1;
    int i2=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                i1=i;
                i2=j;
                break;
            }
        }
    }
    cout<<"Indices of target pair :["<<i1<<" , "<<i2<<"]";
}
void minetwosummap(vector<int> &arr,int n,int k)
{
    map <int,int> mp;
    int i1=-1;
    int i2=-1;
    for(int i=0;i<n;i++)
    {
        int com=k-arr[i];
        if(mp.find(com)!=mp.end())
        {
            i1=mp[com];
            i2=i;
            break;
        }
        mp[arr[i]]=i;
    }
    cout<<"Indices of target pair:["<<i1<<" , "<<i2<<"]";
}
void strivertwosum(vector<int> &arr,int n,int k)
{
    int left=0;
    int right=n-1;
    int flag=0;
    sort(arr.begin(),arr.end());
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum<k)
        left++;
        else if(sum>k)
        right--;
        else
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
    cout<<"Pair exist";
    else
    cout<<"Pair D.N.E";
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
    int k;
    cin>>k;
    minetwosum(arr,n,k);
    minetwosummap(arr,n,k);
    strivertwosum(arr,n,k);
}
