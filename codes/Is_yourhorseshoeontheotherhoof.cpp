#include <iostream>
using namespace std;
int main ()
{

int arr[4];
int n = 0;
for (int i = 0;i < 4;i++)
{
cin >> arr[i];
}
for(int i = 0;i<4;i++)
{
for(int j = 0;j< 4; j++){
if(i < j && j != i){
if(arr[i]== arr[j]){
n++;
break;
}}
}
}
cout << n;


return 0;
}
