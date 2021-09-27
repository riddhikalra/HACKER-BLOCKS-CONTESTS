#include<iostream>
using namespace std;
int main() {
	string str;
	cin>>str;
	int i;
	for(i=0;i<str.length()-1;i++)
	{
		if(str[i]==str[i+1])
		{
			cout<<str[i]<<"*";
		}
		else
		cout<<str[i];
	}
	cout<<str[i];
	return 0;
}
