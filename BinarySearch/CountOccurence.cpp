// Problem: Count Occurence

#include <bits/stdc++.h>
using namespace std;
void countoccurrence(vector<int> &arr,int n,int target)
{
    int low=0;
    int high=n-1;
    int firstoccurence=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            firstoccurence=mid;
            high=mid-1;
        }
        else if(arr[mid]>target)
        high=mid-1;
        else
        low=mid+1;
    }
    low=0;
    high=n-1;
    int lastoccurence=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            lastoccurence=mid;
            low=mid+1;
        }
        else if(arr[mid]>target)
        high=mid-1;
        else
        low=mid+1;
    }
    if(firstoccurence==-1)
    cout<<"No. of occurence of "<<target<<" : "<<0;
    else
    cout<<"No. of occurence of "<<target<<" : "<<(lastoccurence-firstoccurence+1);
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
    int target;
    cin>>target;
    countoccurrence(arr,n,target);
}
