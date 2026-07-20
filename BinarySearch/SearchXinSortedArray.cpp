// Problem: Search X in sorted array 

#include<bits/stdc++.h>
using namespace std;
void binarysearch(vector<int> &arr,int n,int target)
{
    int targetindex=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(target==arr[mid])
        {
            targetindex=mid;
            break;
        }
        else if(target<arr[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    cout<<"Element "<<target<<" at index : "<<targetindex;
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
    binarysearch(arr,n,target);
}
