// Problem: Longest Subarray with given Sum K
 
#include<bits/stdc++.h>
using namespace std;
void longestsubarray(vector<int> &arr,int n,int k)
{
    map <int,int> presummap;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
        maxlen=max(maxlen,i+1);
        int rem=sum-k;
        if(presummap.find(rem)!=presummap.end())
        {
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end())
        presummap[sum]=i;
    }
    cout<<"Longest subarray size : "<<maxlen;
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
    int k;
    cin>>k;
    longestsubarray(arr,n,k);
}
