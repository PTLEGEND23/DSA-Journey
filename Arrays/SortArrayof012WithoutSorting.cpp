// Problem: Sort array of 0,1,2 without sorting
 
#include<bits/stdc++.h>
using namespace std;
void minesort012brute(vector<int> &arr,int n)
{
    int c=0;
    while(c<n)
    {
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            swap(arr[i],arr[i-1]);
        }
        c++;
    }
    for(int x:arr)
    cout<<x<<" ";
}
void minesort012better(vector<int> &arr,int n)
{
    int c0=0;
    int c1=0;
    int c2=0;
    for(int x:arr)
    {
        if(x==0)
        c0++;
        else if(x==1)
        c1++;
        else
        c2++;
    }
    int i=0;
    while(c0>0)
    {
        arr[i++]=0;
        c0--;
    }
    while(c1>0)
    {
        arr[i++]=1;
        c1--;
    }
    while(c2>0)
    {
        arr[i++]=2;
        c2--;
    }
    for(int x:arr)
    cout<<x<<" ";
}
void striversort012(vector<int> &arr,int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        mid++;
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int x:arr)
    cout<<x<<" ";
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
    minesort012brute(arr,n);
    minesort012better(arr,n);
    striversort012(arr,n);
}
