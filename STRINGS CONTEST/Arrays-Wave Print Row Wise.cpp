#include<iostream>
using namespace std;
int main() {
	int row,col;
	cin>>row>>col;
	int arr[100][100];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		if(i%2==0)
		for(int j=0;j<col;j++)
		cout<<arr[i][j]<<", ";
		else
		for(int j=col-1;j>=0;j--)
		cout<<arr[i][j]<<", ";
	}
	cout<<"END";
	return 0;
}
