#include <bits/stdc++.h>
using namespace std;

void move(string s, int i, int l)
{
    if (i >= l)
        return;
 
    char curr = s[i];
    if (curr != 'x')
        cout << curr;
        move(s, i + 1, l);
 
    if (curr == 'x')
        cout << curr;
	    return;
}

int main()
{
    string s;
	cin>>s;
 
    int l = s.length();
 
    move(s, 0, l);
 
    return 0;
}
