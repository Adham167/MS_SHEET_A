#include <iostream>
#include <string>
using namespace std;
int main(){
string s,t;
cin >> s >> t;

int n = t.length();
int c =0;
for (int i = 0;i < n;i++)
{
if(s[c]==t[i]){
c++;}
}
cout << c+1;

return 0;
}
