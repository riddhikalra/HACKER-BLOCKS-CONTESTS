#include<iostream>
using namespace std;
int main() {
	int rows,columns;
	cin>>rows>>columns;
	int arr[rows][columns];
	for(int i=0;i<rows;i++)
		for(int j=0;j<columns;j++)
			cin>>arr[i][j];
	int startRow = 0,startColumn=0;
	while(startRow < rows && startColumn < columns)
	{
		for(int i = startRow ; i < rows; i++)
			cout<<arr[i][startColumn]<<", ";
		startColumn++;
		for(int i = startColumn; i<columns; i++)
			cout<<arr[rows-1][i]<<", ";
		rows--;
		if(startColumn<columns)
		{
			for(int i=rows-1;i>=startRow;i--)
				cout<<arr[i][columns-1]<<", ";
			columns--;
		}
		if(startRow<rows){
			for(int i=columns-1;i>=startColumn;i--)
				cout<<arr[startRow][i]<<", ";
				startRow++;
		}
	}
	cout<<"END";
	return 0;
}
