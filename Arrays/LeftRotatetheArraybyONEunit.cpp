// Problem: Left Rotate the Array by ONE unit
 
#include<bits/stdc++.h>
using namespace std;
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
    int temp;
    for(int i=0;i<n-1;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int x:arr)
    cout<<x<<" ";
}
