// Problem: Spiral Printing of Matrix

#include<bits/stdc++.h>
using namespace std;
void spiralprint(vector<vector<int>> &matrix,int rows,int columns)
{
    int total=rows*columns;
    int top=0;
    int bottom=rows-1;
    int left=0;
    int right=columns-1;
    int rc;
    int cc;
    while(total>0)
    {
        cc=left;
        while(cc<=right)
        { 
            cout<<matrix[top][cc]<<" ";
            cc++;
            total--;
        }
        top++;
        rc=top;
        while(rc<=bottom)
        {
            cout<<matrix[rc][right]<<" ";
            rc++;
            total--;
        }
        right--;
        if(top<=bottom)
        {
            cc = right;
            while(cc>=left)
            {
                cout<<matrix[bottom][cc]<<" ";
                cc--;
                total--;
            }
            bottom--;
        }
        if(left<=right)
        {
            rc=bottom;
            while(rc>=top)
            {
                cout<<matrix[rc][left]<<" ";
                rc--;
                total--;
            }
            left++;
        }
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
    spiralprint(matrix,rows,columns);
}
