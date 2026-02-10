#include <iostream>
using namespace std;
int main ()
{

int s,k,r;
cin >>  k >> r;
int n= 1;
s = k;
while(1)
{

s = n *k; 
if(s%10 == 0 || s%10 == r){
cout << n;
return 0;} 

n++;
}

//!n? cout << 1: cout << n;
return 0;
}
