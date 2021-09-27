#include<bits/stdc++.h>
using namespace std;
char temp;
set<string>s;
void perm(string str,int i)
{
	if(str[i]=='\0')
	{
		s.insert(str);
		return;
	}
	for(int j=i;str[j]!='\0';j++)
	{
		swap(str[i],str[j]);
		perm(str,i+1);
		swap(str[i],str[j]);
	}
}
int main() {
	string str;
	cin>>str;
	string temp;
	temp=str;
	perm(str,0);
	set<string> :: iterator itr=s.begin();
	while(itr!=s.end())
	{
		if(*itr>temp)
		{
			cout<<*itr<<endl;
		}
		itr++;
	}
	return 0;
}
