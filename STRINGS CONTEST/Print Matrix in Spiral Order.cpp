#include <iostream>
using namespace std;
int main() {
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>arr[i][j];
    }
    int m=0,n=0,i;
    while(m<row && n<col)
    {
        for(i=n;i<col;i++)
        cout<<arr[m][i]<<" ";
        m++;

        for(i=m;i<row;i++)
        cout<<arr[i][col-1]<<" ";
        col--;

        if(m<row)
        {
            for(i=col-1;i>=n;i--)
            cout<<arr[row-1][i]<<" ";
            row--;
        }

        if(n<col)
        {
            for(i=row-1;i>=m;i--)
            cout<<arr[i][n]<<" ";
            n++;
        }
    }
}

