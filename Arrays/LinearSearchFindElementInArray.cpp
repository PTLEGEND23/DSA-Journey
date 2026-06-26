// Problem: Linear Search find element in array 
 
#include<bits/stdc++.h>
using namespace std;
int search(vector <int> &arr,int num)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==num)
        return i;
    }
    return -1;
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
    int num;
    cin>>num;
    int index=search(arr,num);
    cout<<"Element "<<num<<" at index : "<<index;
}
