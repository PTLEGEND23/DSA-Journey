// Problem: Search Insert Position

#include <bits/stdc++.h>
using namespace std;
void searchinsertposition(vector<int> &arr, int n, int target)
{
    int low=0;
    int high=n-1;
    int insertIndex=n;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>=target)
        {
            insertIndex=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    cout<<"Insert Position : "<<insertIndex;
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
    searchinsertposition(arr, n, target);
}
