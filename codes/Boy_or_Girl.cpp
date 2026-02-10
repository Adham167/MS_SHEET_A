#include <iostream>
#include <string>
#include <set>
using namespace std;
int main ()
{
string s;
cin >> s;
int n;
set<char> se;
for (int i = 0;i < s.length();i++)
{

se.insert(s[i]);
}

n = se.size();
if(n%2 == 0)


cout << "CHAT WITH HER!";
else
cout << "IGNORE HIM!";
return 0;
}
