#include<iostream>
using namespace std;
int main() {
	int r,c;
	cin>>c>>r;
	int arr[c][r],i,j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(j=0;j<r;j++)
	{
		if(j%2==0)
		{
			for(i=0;i<c;i++)
			cout<<arr[i][j]<<", ";
		}
		else{
			for(i=c-1;i>=0;i--)
			cout<<arr[i][j]<<", ";
		}
	}
	cout<<"END";
	return 0;
}
