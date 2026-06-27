// Problem: Union of two Sorted Array
 
#include<bits/stdc++.h>
using namespace std;
void mineuni(vector <int> &a,vector <int> &b)
{
    set <int> uni;
    for(int i=0;i<max(a.size(),b.size());i++)
    {
        if(i<a.size())
        uni.insert(a[i]);
        if(i<b.size())
        uni.insert(b[i]);
    }
    for(int x:uni)
    cout<<x<<" ";
}
void striveruni(vector<int> &a,vector<int> &b)
{
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector <int> uni;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            if(uni.size()==0 || uni.back()!=a[i])
            uni.push_back(a[i]);
            i++;
        }
        else
        {
            if(uni.size()==0 || uni.back()!=b[j])
            uni.push_back(b[j]);
            j++;
        }
    }
    while(j<n2)
    {
        if(uni.size()==0 || uni.back()!=b[j])
        uni.push_back(b[j]);
        j++;
    }
    while(i<n1)
    {
        if(uni.size()==0 || uni.back()!=a[i])
        uni.push_back(a[i]);
        i++;
    }
    for(int x:uni)
    cout<<x<<" ";
}
int main()
{
    int n1;
    cin>>n1;
    vector <int> a;
    for(int i=0;i<n1;i++)
    {
        int value;
        cin>>value;
        a.push_back(value);
    }
    int n2;
    cin>>n2;
    vector <int> b;
    for(int i=0;i<n2;i++)
    {
        int value;
        cin>>value;
        b.push_back(value);
    }
    // mineuni(a,b);
    // striveruni(a,b);
}
