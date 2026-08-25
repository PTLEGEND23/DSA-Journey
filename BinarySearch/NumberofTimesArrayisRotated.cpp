// Problem: No. of times Array is Rotated

#include <bits/stdc++.h>
using namespace std;
void timesarrayisrotated(vector<int> &arr,int n)
{
    int low=0;
    int high=n-1;
    int timesrotated=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[high])
        {
            timesrotated=low;
            break;
        }
        if(arr[low]<=arr[mid])
        {
            timesrotated=low;
            low=mid+1;
        }
        else
        {
            timesrotated=mid;
            high=mid-1;
        }
    }
    cout<<"No. of times Array is Rotated : "<<timesrotated;
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
    timesarrayisrotated(arr,n);
}
