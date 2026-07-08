// Problem: Find the Majority Element that occurs more than N/2 times
 
#include<bits/stdc++.h>
using namespace std;
void minemajorityelementmap(vector<int> &arr,int n)
{
    unordered_map <int,int> mp;
    for(int x:arr)
    mp[x]++;
    for(const auto &i : mp)
    {
        if(i.second>n/2)
        {
            cout<<"Majority element : "<<i.first;
            break;
        }
    }
}
void strivermajorityelement(vector <int> &arr,int n)
{
    int count=0;
    int ele;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            count=1;
            ele=arr[i];
        }
        else if(arr[i]==ele)
        count++;
        else
        count--;
    }
    cout<<"Majority element : "<<ele;
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
    minemajorityelementmap(arr,n);
    strivermajorityelement(arr,n);
}
