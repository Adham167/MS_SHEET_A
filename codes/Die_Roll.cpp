#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int y,w;
cin >> y >> w;
int m = max(y,w);
int a=0;
for (int i = 6; i > 0;i--){
if(i == m){
a++;
break;
}
a++;
}

if(a == 6)
cout << 1<< "/" << 1;
else if(a%2 ==0)
cout<< a/2 << "/" << 3;
else if(a%3 == 0)
cout << a/3 << "/" << 2;
else
cout << a << "/" << 6;
return 0;
}
