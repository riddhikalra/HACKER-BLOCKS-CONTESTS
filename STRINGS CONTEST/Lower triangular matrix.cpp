#include<iostream>
using namespace std;
int main () {
	int s;
	cin>>s;
	int arr[s][s];
	int count=0;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==0)
			count++;
		}
	}
	if(count>= (s*2-2))
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
