#include <iostream>

using namespace std;
int main ()
{
int n;
cin >> n;
int arr[n];
int i,f, s= 0,d= 0; 
for (int i = 0; i< n;i++)
{
cin >> arr[i];
}
i = 0;
f = n-1;
int player = 0,max = 0;
while(i <= f)
{
if(arr[i] >= arr[f])
{
max = arr[i];
i++;
}else {
max = arr[f];
f--;
}
if(player % 2 == 0)
s += max;
else
d += max;
player++;
}

cout << s << " " << d;
return 0;
}
