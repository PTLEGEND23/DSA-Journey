// Problem: Pascal Triangle

#include <bits/stdc++.h>
using namespace std;
void pascaltrianglemine(int n)
{
    vector<int> previous;
    for(int k=1;k<=n;k++)
    {
        for(int j=n;j>k;j--)
        cout<<" ";
        
        if(k==1)
        cout<<1<<" ";
        else
        {
            vector<int> current;
            current.push_back(1);
            for(int i=1;i<previous.size();i++)
            current.push_back(previous[i]+previous[i-1]);
            current.push_back(1);
            for(int x:current)
            cout<<x<<" ";
            previous=current;
        }
        cout<<"\n";
    }
}
void specificeleemtnofpascaltriangle(int row,int column)
{
    row=row-1;
    column=column-1;
    int result=1;
    for(int i=0;i<column;i++)
    {
        result=result*(row-i);
        result=result/(i+1);
    }
    cout<<result<<"\n";
}
void specificrowofpascaltriangle(int targetrow)
{
    int result=1;
    cout<<result<<"\t";
    for(int i=0;i<targetrow;i++)
    {
        result=result*(targetrow-i);
        result=result/(i+1);
        cout<<result<<"\t";
    }
    cout<<"\n";
}
int main()
{
    int row;
    cin>>row;
    int column;
    cin>>column;
    int n;
    cin >> n;
    int targetrow;
    cin>>targetrow;
    specificeleemtnofpascaltriangle(row,column);
    specificrowofpascaltriangle(targetrow);
    pascaltrianglemine(n);
}
