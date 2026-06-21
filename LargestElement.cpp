#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int temp=arr[0];
    for(int x:arr)
    {
        if(temp<x)
        temp=x;
    }
    cout<<"Largest element : "<<temp;
}
