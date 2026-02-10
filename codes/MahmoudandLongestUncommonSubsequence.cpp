#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string s1;
    string s2;
    cin>>s1>>s2;
    int n1 = s1.length();
    int n2 = s2.length();
    if(s1!=s2)
        cout<<max(n1,n2);
    else
        cout << -1;
    return 0;
}

