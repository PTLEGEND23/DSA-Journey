// Problem: Get next permuation

#include<bits/stdc++.h>
using namespace std;
void minegetnextpermutation(vector<int> &arr,int n)
{
    vector<vector<int>> ans;
    vector<int> originalcopy=arr;
    sort(arr.begin(),arr.end());
    do
    {
        ans.push_back(arr);
    }while(next_permutation(arr.begin(),arr.end()));
    int nextIndex;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==originalcopy)
        {
            if(i==ans.size()-1)
            nextIndex=0;
            else
            nextIndex=i+1;
            for(int x:ans[nextIndex])
            {
                cout<<x<<" ";
            }
            break;
        }
    }
}
void strivernextpermutation(vector<int> &arr,int n)
{
    int index=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    reverse(arr.begin(),arr.end());
    for(int i=n-1;i>index;i--)
    {
        if(arr[i]>arr[index])
        {
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    for(int x:arr)
    cout<<x<<" ";
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
    minegetnextpermutation(arr,n);
    strivernextpermutation(arr,n);
}
