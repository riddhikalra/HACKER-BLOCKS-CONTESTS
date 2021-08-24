#include<iostream>
using namespace std;
int main() {
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='#')
			break;
			else if(arr[i][j]=='*' && j!=m-1)
			s+=4;
			else if(arr[i][j]=='*'&& j==m-1)
			s+=5;
			else if(arr[i][j]=='.' &&j!=m-1)
			s-=3;
			else if(arr[i][j]=='.' && j==m-1)
			s-=2;
		}

		if(s<k)
		{
			cout<<"No";
			return 0;
		}
	}
	if(s>k)
	cout<<"Yes"<<endl<<s;
	else
	cout<<"No";
	return 0;
}
