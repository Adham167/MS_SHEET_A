#include <iostream>
using namespace std;

int main ()
{
int n,g=1;
cin >> n;
string a= "a",b;
while(n--)
{
	cin >> a;
	if(a[1] == b[0])
		g++;
b = a;
}
cout << g;
return 0;
}
