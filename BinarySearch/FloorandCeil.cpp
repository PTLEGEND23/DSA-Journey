// Problem: Floor and Ceil

#include <bits/stdc++.h>
using namespace std;
void floorandceil(vector<int> &arr, int n, int target)
{
    int low=0;
    int high=n-1;
    int floor=INT_MIN;
    int ceil=INT_MIN;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==target)
        {
            floor=arr[mid];
            ceil=arr[mid];
            break;
        }
        else if(arr[mid]>target)
        {
            high=mid-1;
            ceil=arr[mid];
        }
        else
        {
            low=mid+1;
            floor=arr[mid];
        }
    }
    cout<<"Floor : "<<floor<<"\n"<<"Ceil : "<<ceil;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    int target;
    cin >> target;
    floorandceil(arr, n, target);
}
