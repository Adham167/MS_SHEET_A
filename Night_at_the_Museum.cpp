#include <iostream>
#include <string>
using namespace std;

int main()
{
string s;
int n=0;
char c = 'a';
cin >> s;
for (int i = 0;i < s.length();i++)
{
	if(c < s[i]){
	n += min((s[i]-c),(26-(s[i]-c)));
	c = s[i];
	}else{
	n += min((26-(c-s[i])),(c-s[i]));
	c = s[i];
}
}

cout << n;
return 0;
}
