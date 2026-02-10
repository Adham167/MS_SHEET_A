#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0;i < n;i++)
    {

        string s;
        s = arr[i];

        int c;   
        c = s.length();
        if(c<=10)
        {
            cout << s;
        }
        else{
            cout << s[0] << c-2 << s[c-1];
        }
        cout << endl;
    }




    return 0;
}
