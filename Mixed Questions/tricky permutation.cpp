#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string ans[100000];
int c=0;
void perm(string s,int i)
{
	if(i==s.length())
	{
		ans[c++]=s;
		return;
	}
	for(int j=i;j<s.length();j++)
	{
		swap(s[i],s[j]);
		perm(s,i+1);
		swap(s[i],s[j]);
	}
}
int main() {
	string s;
	cin>>s;
	perm(s,0);
	sort(ans,ans+c);
	string temp="";
	for(int i=0;i<c;i++)
	{
		if(temp!=ans[i])
		cout<<ans[i]<<endl;
		temp=ans[i];
	}
	return 0;
}
