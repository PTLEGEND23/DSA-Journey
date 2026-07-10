// Problem: Buy and Sell Stocks
#include<bits/stdc++.h>
using namespace std;
void stockbuysellbrute(vector<int> &arr,int n)
{
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            maxprofit=max(maxprofit,arr[j]-arr[i]);
        }
    }
    cout<<"Max profit : "<<maxprofit;
}
void stockbuysellmine(vector<int> &arr,int n)
{
    int maxprofit=0;
    int minprice=arr[0];
    for(int i=1;i<n;i++)
    {
        minprice=min(minprice,arr[i]);
        maxprofit=max(maxprofit,arr[i]-minprice);
    }
    cout<<"Max profit : "<<maxprofit;
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
    stockbuysellbrute(arr,n);
    stockbuysellmine(arr,n);
}
