#include<iostream>
using namespace std;

int main() {
	string str;
	cin>>str;
	int j=0,i,c=1;
	for(i=1;i<str.length();i++)
	{
		if(str[i]==str[j])
		{
			c++;
		}
		else{
			cout<<str[j]<<c;
			c=1;
			j=i;
		}
	}
	if(i==str.length())
	cout<<str[i-1]<<c;

	return 0;
}
