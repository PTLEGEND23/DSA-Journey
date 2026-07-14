// Problem: Longest Consecutive Sequence in an Array

#include<bits/stdc++.h>
using namespace std;
void mineconsecutive(vector<int> &arr,int n)
{
    int currentcount=1;
    int maxcount=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]==1)
        currentcount++;
        else if (arr[i]-arr[i-1]!=0)
        currentcount=1;
        maxcount=max(maxcount,currentcount);
    }
    cout<<"Longest Consecutive Sequence : "<<maxcount;
}
void striverconsecutive(vector<int> &arr,int n)
{
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++)
    st.insert(arr[i]);
    for(auto it:st)
    {
        if(st.find(it-1)==st.end())
        {
            int count=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                x+=1;
                count+=1;
            }
            longest=max(longest,count);
        }
    }
    cout<<"Longest Consecutive Sequence : "<<longest;
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
    mineconsecutive(arr,n);
    striverconsecutive(arr,n);
}
