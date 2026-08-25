// Problem: Single Element

#include <bits/stdc++.h>
using namespace std;
void singleelement(vector<int> &arr,int n)
{
    int low=0;
    int high=n-1;
    int singleele=-1;
    while(low<=high)
    {
        if(low==high)
        {
            singleele=arr[low];
            break;
        }
        int mid=low+(high-low)/2;
        if(mid%2==1)
        mid--;
        if(arr[mid]==arr[mid+1])
        low=mid+2;
        else
        high=mid;
    }
    cout<<"Single Element : "<<singleele;
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
    singleelement(arr,n);
}
