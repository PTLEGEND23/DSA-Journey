// Problem: Print Subarray with Maximum Subarray Sum
#include<bits/stdc++.h>
using namespace std;
void mineprintmaxum(vector<int> &arr,int n)
{
    int maxval=INT_MIN;
    int sum=0;
    int start=0;
    int end=0;
    int substart=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(maxval<sum)
        {
            maxval=sum;
            start=substart;
            end=i;
        }
        if(sum<0)
        {
            sum=0;
            substart=i+1;
        }
    }
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
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
    mineprintmaxum(arr,n);
}
