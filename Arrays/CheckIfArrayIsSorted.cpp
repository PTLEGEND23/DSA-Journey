// Problem: Check if Array is Sorted

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
    int temp=arr[0];
    int flag=1;
    for(int i=1;i<n;i++)
    {
        if(temp>arr[i])
        {
            flag=0;
            break;
        }
        temp=arr[i];
    }
    if(flag!=1)
    cout<<"Array is Not Sorted";
    else
    cout<<"Array is Sorted";
}
