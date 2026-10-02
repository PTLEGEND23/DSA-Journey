// Smallest Diisor

#include <bits/stdc++.h>
using namespace std;

void smallestdivisor(vector<int> &arr,int n,int limit)
{
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    int ans=INT_MAX;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=(arr[i] + mid - 1) / mid;
        if(sum>limit)
        low=mid+1;
        else
        {
            ans=min(ans,mid);
            high=mid-1;
        }
    }
    cout<<"Smallest divisor : "<<ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int limit;
    cin >> limit;
    smallestdivisor(arr,n,limit);
}
