#include<iostream>
using namespace std;
int main () {
	int s;
	cin>>s;
	int arr[1000][1000];
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<arr[j][i]<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
