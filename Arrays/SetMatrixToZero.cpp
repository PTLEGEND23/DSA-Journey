// Problem: Set Matrix to Zero

#include<bits/stdc++.h>
using namespace std;
void minesetzero(vector<vector<int>> &matrix,int rows,int columns)
{
    unordered_set<int> zerorowindex;
    unordered_set<int> zerocolumnindex;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                zerorowindex.insert(i);
                zerocolumnindex.insert(j);
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (zerorowindex.count(i) || zerocolumnindex.count(j)) 
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
void striversetzero(vector<vector<int>> &matrix,int rows,int columns)
{
    int col=1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                if(j!=0)
                matrix[0][j]=0;
                else
                col=0;
            }
        }
    }
    for(int i=1;i<rows;i++)
    {
        for(int j=1;j<columns;j++)
        {
            if(matrix[i][j]!=0)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0)
    {
        for(int j=0;j<columns;j++)
        matrix[0][j]=0;
    }
    if(col==0)
    {
        for(int i=0;i<rows;i++)
        matrix[i][0]=0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
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
    minesetzero(matrix,rows,columns);
    striversetzero(matrix,rows,columns);
}
