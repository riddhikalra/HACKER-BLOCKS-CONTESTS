#include<iostream>
using namespace std;
int main () {
	int size;
	cin>>size;
	int arr[100][100];
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			cin>>arr[i][j];
	for(int i=0;i<size;i++)
		{for(int j=0;j<size;j++)
			
				if(j>=i)
					cout<<arr[i][j]<<" ";
				else
					cout<<"0 ";
			cout<<endl;
			}
	return 0;
}
