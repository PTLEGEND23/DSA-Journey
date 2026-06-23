// Problem: Remove Duplicate from Sorted Array
 
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
   int temp=0;
   for(int i=1;i<n;i++)
   {
    if(arr[i]!=arr[i-1])
    {
        temp++;
        arr[temp]=arr[i];
    }
   }
   arr.erase(arr.begin()+(temp+1),arr.end());
    for(int i:arr)
    cout<<i<<" ";
}
