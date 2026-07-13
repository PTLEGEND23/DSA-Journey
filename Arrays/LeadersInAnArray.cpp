// Problem: Leaders in an Array

#include<bits/stdc++.h>
using namespace std;
void mineleaders(vector<int> &arr,int n)
{
    vector<int> leader;
    int maxright=arr[n-1];
    leader.push_back(maxright);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>maxright)
        {
            leader.push_back(arr[i]);
            maxright=arr[i];
        }
    }
    reverse(leader.begin(),leader.end());
    for(int x:leader)
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
    mineleaders(arr,n);
}
