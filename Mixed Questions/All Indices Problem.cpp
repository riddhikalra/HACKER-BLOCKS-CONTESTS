#include<iostream>
using namespace std;
void find(int arr[],int m,int n,int i)
{
	if(i==n)
	{
		if(arr[i]==m)
		{
			cout<<i<<" ";
		}
		return;
	}
	if(arr[i]==m)
	{
		cout<<i<<" ";
	}
	find(arr,m,n,i+1);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int m;
	cin>>m;
	find(arr,m,n-1,0);
	return 0;
}
