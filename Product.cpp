#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int m = 600;
int main() {

    string s2;
    string s1;
    while(cin >> s1) 
    {
        cin >> s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int a[m];
        memset(a,0,sizeof(a));
        for(int i = 0;i < s1.length();i++)
            for(int j = 0;j<s2.length();j++)
            {
                a[i+j] += (s1[i]-'0')* (s2[j]-'0');
            }
        for(int i = 0;i< m-1;i++)
        {
            a[i+1] += a[i]/10;
            a[i] %=10;
        }
        int i = m-1;
        while(i>0&&a[i]==0)i--;
        for(;i>=0;i--)
            cout << a[i];
        cout << endl;
    }


    return 0;
}

