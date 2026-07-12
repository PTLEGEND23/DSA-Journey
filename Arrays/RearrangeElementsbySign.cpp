// Problem: Rearrange Elements by Sign
#include<bits/stdc++.h>
using namespace std;
void rearrangebysignbetter(vector<int> &arr,int n)
{
    int positiveindex=0;
    int negativeindex=0;
    vector<int> positive;
    vector<int> negative;
    for(auto x:arr)
    {
        if(x>0)
        positive.push_back(x);
        else
        negative.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=positive[positiveindex];
            positiveindex++;
        }
        else
        {
            arr[i]=negative[negativeindex];
            negativeindex++;
        }
    }
    for(auto x:arr)
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
    rearrangebysignbetter(arr,n);
}
