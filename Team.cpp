#include <iostream>
using namespace std;


int main()
{
int a,b,c,n,d = 0;
cin >> n;
while(n--)
{
cin >> a >> b>>c;
if((a + b + c)>=2) 
d++;
}
cout << d;


return 0;
}




