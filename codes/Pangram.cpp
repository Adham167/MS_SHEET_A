#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    int arr[26];
    int c=1;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0;i< n;i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0;i< n;i++)
    {
        arr[s[i]-'a'] = 1;
    }

    for(int i = 0;i< 26;i++)
    {
        if(arr[i]!=1)
            c = 0;
    }

    if(c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

