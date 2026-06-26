// Problem: Move Zeros to End
 
#include<bits/stdc++.h>
using namespace std;
void mine(vector <int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}
void striver(vector <int> &arr,int n)
{   
    int j;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
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
    mine(arr,n);
    striver(arr,n);
    for(int x:arr)
    cout<<x<<" ";
}
