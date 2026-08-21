// Problem: Minimum Element in Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;
void minimumelement(vector<int> &arr,int n)
{
    int low=0;
    int high=n-1;
    int minele=INT_MAX;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[high])
        {
            minele=min(minele,arr[low]);
            break;
        }
        if(arr[low]<=arr[mid])
        {
            minele=min(minele,arr[low]);
            low=mid+1;
        }
        else
        {
            minele=min(minele,arr[mid]);
            high=mid-1;
        }
    }
    cout<<"Minimum Element : "<<minele;
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
    minimumelement(arr,n);
}
