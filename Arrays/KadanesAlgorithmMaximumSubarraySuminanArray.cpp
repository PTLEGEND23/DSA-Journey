// Problem: Kadanes Algorithm Maximum Subarray Sum in an Array
 
#include<bits/stdc++.h>
using namespace std;
void minekadane(vector<int> &arr,int n)
{
    int maxval=arr[0];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            maxval=max(maxval,sum);
        }
    }
    cout<<"Maximum Subarray Sum : "<<maxval;
}
void striverkadane(vector<int> &arr,int n)
{
    int maxval=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxval=max(maxval,sum);
        if(sum<0)
        sum=0;
    }
    cout<<"Maximum Subarray Sum : "<<maxval;
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
   minekadane(arr,n);
   striverkadane(arr,n);
}
