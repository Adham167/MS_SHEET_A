#include <iostream>
#include <string>
using namespace std;

int main ()
{
string s;
cin >> s;
int a=0,b=0;

for (int i = 0; i < s.length();i++)
{
	if (s[i] >= 'a') 
		a++;
	else if (s[i] <'a')
		b++;
}

if (a >= b)
{

for (int i = 0; i < s.length();i++)
{
s[i] = tolower(s[i]);
}

cout << s;
}
else
{
for (int i = 0; i < s.length();i++)
{
s[i] = toupper(s[i]);
}
cout << s;
}
return 0;
}
