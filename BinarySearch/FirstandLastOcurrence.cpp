// Problem: First and Last Ocurrence

#include <bits/stdc++.h>
using namespace std;
void firstoccurrence(vector<int> &arr,int n,int target)
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
    cout<<"First Occurence : "<<firstoccurence<<"\n";
}
void lastoccurrence(vector<int> &arr,int n,int target)
{
    int low=0;
    int high=n-1;
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
    cout<<"Last Occurence : "<<lastoccurence<<"\n";   
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
    firstoccurrence(arr,n,target);
    lastoccurrence(arr,n,target);
}
