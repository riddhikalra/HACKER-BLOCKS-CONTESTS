#include<iostream>
using namespace std;
int c=0;
void sub(string s,int i,int n,string s1)
{
	if(i==n)
	{
		cout<<s1<<" ";
		c++;
		return;
	}
	sub(s,i+1,n,s1);
	sub(s,i+1,n,s1+s[i]);
}
int main() {
	string s;
	cin>>s;
	sub(s,0,s.length(),"");
	cout<<"\n"<<c;
	return 0;
}
