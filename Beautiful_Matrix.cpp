#include<iostream>
using namespace std;
int main()
{
int arr[5][5];
int x,a,b,y;
for(int r = 0;r<5;r++)
{
	for(int c = 0;c<5;c++)
	{
		cin>>arr[r][c];
		if(arr[r][c] == 1)
		{
			x = r;
			y = c;
			cout << endl;
			cout << x << " " << y << endl;
		}
	}
}

a = x - 2;
b = y - 2;

if(a < 0)
a = a* (-1);
if(b < 0)
b = b*(-1);

cout << a + b;




return 0;
}
