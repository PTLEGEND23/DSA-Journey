// Problem: Longest Subarray with given Sum K(Positives)
 
#include<bits/stdc++.h>
using namespace std;
void minelongestsubarraybrute(vector<int> &arr,int n,int k)
{
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        int count=1;
        int sum=arr[i];
        if(sum==k)
        maxcount=max(maxcount,count);
        else
        {
            for(int j=i+1;j<n;j++)
            {
                sum+=arr[j];
                count++;
                if(sum==k)
                {
                    maxcount=max(maxcount,count);
                    break;
                }
            }
        }
    }
    cout<<"Longest subarray size : "<<maxcount;
}
void striverlongestsubarray(vector<int> &arr,int n,int k)
{
    int maxlength=0;
    int right=0;
    int left=0;
    int sum=arr[0];
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        maxlength=max(maxlength,right-left+1);
        right++;
        if(right<n)
        sum+=arr[right];
    }
    cout<<"Longest subarray size : "<<maxlength;
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
    int k;
    cin>>k;
    minelongestsubarraybrute(arr,n,k);
    striverlongestsubarray(arr,n,k);
}
