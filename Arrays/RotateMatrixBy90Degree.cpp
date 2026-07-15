// Problem: Rotate Matrix by 90 degree

#include<bits/stdc++.h>
using namespace std;
void rotatematrix(vector<vector<int>> &matrix,int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=i+1;j<columns;j++)
        swap(matrix[i][j],matrix[j][i]);
    }
    for(auto &x:matrix)
    reverse(x.begin(),x.end());
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
}
int main()
{
    int rows;
    cin>>rows;
    int columns;
    cin>>columns;
    vector<vector<int>> matrix(rows, vector<int>(columns));
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>matrix[i][j];
        }
    }
    rotatematrix(matrix,rows,columns);
}
