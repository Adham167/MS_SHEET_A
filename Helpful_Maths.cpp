#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    n = s.length();
    for(int i = 0;i < n;i+=2)
    {
        for (int j = 0;j < n;j+=2)
        {
            if(s[i]<s[j])
                swap(s[i],s[j]);
            }


    }
    cout << s;
    return 0;
}

