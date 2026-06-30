// Problem: Maximum Consecutive Ones
 
#include<bits/stdc++.h>
using namespace std;
void mineone(vector<int> &arr,int n)
{
    int maxcount=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        count++;
        else
        {
            maxcount = max(maxcount, count);
            count=0;
        }
    }
    maxcount = max(maxcount, count);
    cout<<"Maximum Consecutive One : "<<maxcount;
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
    mineone(arr,n);
}
