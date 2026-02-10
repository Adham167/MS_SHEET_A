#include<iostream>
using namespace std;

int main(){
    int n=1,m=2,c=0;
    while(n!=0)
    {
        cin >>n>>m>>c;
        int t = (c == 1?1:0);
        cout << (((n-7)*(m-7)+t)/2)<<endl;
    }
    return 0;
}
