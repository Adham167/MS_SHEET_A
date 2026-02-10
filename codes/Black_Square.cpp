#include <iostream>
#include <string>

using namespace std;

int main ()
{
int a[4];
for (int i = 0; i < 4; i++)
{
cin >> a[i];
}
string s;
int ans =0;
cin >> s;
for (int i = 0;i < s.length();i++)
{
	if (s[i] == '1') 
		ans += a[0];
	else if(s[i] == '2')
		ans += a[1];
					
	else if(s[i] == '3')
		ans += a[2];

	else if(s[i] == '4')
		ans += a[3];
}
cout << ans;
return 0;
}
