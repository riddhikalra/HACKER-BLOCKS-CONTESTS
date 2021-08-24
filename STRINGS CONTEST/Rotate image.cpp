#include<iostream>
using namespace std;
int main() {
	int size;
	cin>>size;
	int arr[size][size];
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			cin>>arr[i][j];
	for(int i=size-1;i>=0;i--)
		{for(int j=0;j<size;j++)
			cout<<arr[j][i]<<" ";
			cout<<endl;}

	return 0;
}
