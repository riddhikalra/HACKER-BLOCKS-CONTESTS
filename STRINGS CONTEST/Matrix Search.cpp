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
	int t;
	int res=0;
	cin>>t;
	bool ans=false;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(t==arr[i][j])
			ans=true;
		}

	}
	if(ans)
	cout<<"1";
	else
	cout<<"0";
	return 0;
}
