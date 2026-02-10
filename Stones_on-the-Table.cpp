#include <iostream>
#include <string>
using namespace std;

int main()
{
int c=0, n;
cin >> n;
string s;
cin >> s;

for (int i = 0; i <n;i++ )
{
if(s[i] == s[i+1])
c++;
}
cout << c;
return 0;
}
