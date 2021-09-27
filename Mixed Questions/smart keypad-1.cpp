#include<iostream>
using namespace std;
string arr[]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
int count=0;
void print(string n,string arr[],string str,int k)
{
	if(k==n.length())
	{
		cout<<str<<"\n";
		count++;
		return;
	}
	char r=n[k]-'0';
	string str2=arr[r];

	for(int i=0;i<str2.length();i++)
	{
		char c=str2[i];
		print(n,arr,str+c,k+1);
	}
}
int main() {
	string s;
	cin>>s;
	print(s,arr,"",0);
	return 0;
}
