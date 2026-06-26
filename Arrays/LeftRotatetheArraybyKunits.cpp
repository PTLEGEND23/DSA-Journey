// Problem: Left Rotate the Array by k units
 
#include<bits/stdc++.h>
using namespace std;
void mine(vector <int> &arr,int n){
    int temp;
    int k;
    cin>>k;
    while(k!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        k--;
    }
}
void striver(vector<int> &arr,int n,int d){
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    reverse(arr.begin(),arr.begin()+n);
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int var;
        cin>>var;
        arr.push_back(var);
    }
    int d;
    cin>>d;
    striver(arr,n,d%n);
    mine(arr,n);
    for(int x:arr)
    cout<<x<<" ";
}
