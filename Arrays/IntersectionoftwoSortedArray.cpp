// Problem: Intersection of two Sorted Array
 
#include<bits/stdc++.h>
using namespace std;
void mineintersection(vector <int> &a,vector <int> &b)
{
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> inter;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        i++;
        else if(a[i]>b[j])
        j++;
        else
        {
            if(inter.size()==0 || inter.back()!=b[j])
            inter.push_back(b[j]);
            j++;
            i++;
        }
    }
    for(int x:inter)
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
    mineintersection(a,b);
}
