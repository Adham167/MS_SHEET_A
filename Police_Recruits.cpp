#include <iostream>
using namespace std;


int main ()
{
int n,p =0, s=0,c=0,r=0;

cin >> n;
while (n--)
{
cin >> s;
if(s<0){
if(p==0)
{
c +=(s*-1);
r +=(s*-1);
}else
{
c = (p-(s*-1));
p -=(s*-1);
}
}else 
p+=s;
}
cout << r;

return 0;
}
