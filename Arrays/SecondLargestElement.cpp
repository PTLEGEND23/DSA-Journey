// Problem: Second Largest Element in Array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int largest=arr[0];
    int seclargest=INT_MIN;
    for(int x:arr)
    {
        if(largest<x)
        {
            seclargest=largest;
            largest=x;
        }
        else if(seclargest <x && x!=largest)
        seclargest=x;
    }   
    if(seclargest!=INT_MIN)
    cout<<"Second Largest element : "<<seclargest;
    else
    cout<<"No Second Largest element present";
}
