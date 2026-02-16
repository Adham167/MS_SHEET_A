#include <iostream>
#include <string>
using namespace std;

string def = "qwertyuiopasdfghjkl;zxcvbnm,./";
int search(char c)
{
    int n = def.length();
    for(int i = 0;i<n;i++)
    {
        if(def[i]==c)
            return i;
    }
    return 0;
}
int main() {

    char c;
    cin >>c;
    string s;    
    cin >> s;
    int n = s.length();
    for(int i = 0;i<n;i++)
    {
        if(c == 'R')
            s[i] = def[search(s[i])-1];
        else
            s[i] = def[search(s[i])+1];
    }
    cout << s;
    return 0;
}

