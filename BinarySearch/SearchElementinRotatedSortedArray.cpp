// Problem: Element in Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;
void elementinsortedarrayindex(vector<int> &arr,int n,int target)
{
    int low=0;
    int high=n-1;
    int targetIndex=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            targetIndex=mid;
            break;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=target && target<arr[mid])
            high=mid-1;
            else
            low=mid+1;
        }
        else
         {
            if(arr[mid] < target && target <= arr[high])
            low=mid+1;
            else
            high=mid-1;
        }
    }
    cout<<"Index of "<<target<<" in rotated Sorted array : "<<targetIndex;
}
void elementinsortedarraytruefalse(vector<int> &arr,int n,int target)
{
    int low=0;
    int high=n-1;
    bool targetExist=false;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            targetExist=true;
            break;
        }
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++;
            high--;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=target && target<arr[mid])
            high=mid-1;
            else
            low=mid+1;
        }
        else
         {
            if(arr[mid]<target && target<=arr[high])
            low=mid+1;
            else
            high=mid-1;
        }
    }
    cout<<target<<" in rotated Sorted array : "<<(targetExist ? "true" : "false");
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
    elementinsortedarrayindex(arr,n,target);
    elementinsortedarraytruefalse(arr,n,target);
}
