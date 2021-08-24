#include<iostream>
using namespace std;
int main() {
	int row,col,startr,startcol,endrow,endcol,i,j;
	int arr[10][10];
	cin>>row>>col;
	startr=0;
	startcol=0;
	endcol=col-1;
	endrow=row-1;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		cin>>arr[i][j];
	}

	while(startr<=endrow && startcol<=endcol)
	{
		for(j=startcol;j<=endcol;j++)
		cout<<arr[startr][j]<<", ";
		startr++;
		for(i=startr;i<=endrow;i++)
		cout<<arr[i][endcol]<<", ";
		endcol--;

		if(endrow >= startr)
		{
			for(j=endcol;j>=startcol;j--)
			cout<<arr[endrow][j]<<", ";
			endrow--;
		}

		if(startcol <= endcol)
		{
			for(i=endrow;i>=startr;i--)
			cout<<arr[i][startcol]<<", ";
			startcol++;
		}
	}
	cout<<"END";
	return 0;
}
