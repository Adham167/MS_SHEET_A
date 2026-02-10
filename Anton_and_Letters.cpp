#include <iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
string s;
getline(cin,s);
int n =  s.length();
set<char> t;
for(int i = 0;i < n;i++)
{
    if(isalpha(s[i]))
        t.insert(s[i]);
    }

cout << t.size();
    return 0;}
