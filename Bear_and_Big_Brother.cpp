#include<iostream>
using namespace std;
int main(){
int a,b,n= 0;
cin >> a >> b;
if (a == b ) 
{
n = 1;
cout << n;
return 0;
}


while(!(a>b))
{
a = a*3;
b = b*2;
n++;
}
cout << n;

return 0;
}
