#include<iostream>
using namespace std;

int main (){

int n;
int h;
int a;
int w = 0;
cin >> n>>h;
while(n--){
cin>> a;
if(a<=h){
w +=1;
}
else
w+=2;
}
cout << w;
return 0;
}
