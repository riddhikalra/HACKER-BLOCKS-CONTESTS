#include<iostream>
using namespace std;
void replace(string s,size_t i)
{
	if(s[i]=='\0')
	{
		return;
	}
	if(s[i]=='p' && s[i+1]=='i')
	{
		cout<<"3.14";
		replace(s,i+2);
	}
	else{
		cout<<s[i];
		replace(s,i+1);
	}
}
int main() {
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		replace(s,0);
		cout<<endl;
	}
	return 0;
}
