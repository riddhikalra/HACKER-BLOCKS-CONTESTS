#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int k=1;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int arr[n],arr2[n];
		arr[0]=arr2[0]=1;

		for(int i=1;i<=n;i++)
		{
			arr[i]=arr[i-1]+arr2[i-1];
			arr2[i]=arr[i-1];
		}
		cout<<"#"<<k++<<" : "<<arr[n-1]+arr2[n-1]<<"\n";
	}
	return 0;
}
