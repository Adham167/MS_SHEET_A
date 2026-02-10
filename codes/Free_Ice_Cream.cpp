#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d=0;    
    long long x;
    cin >> n >> x;

    char a[n];
    long long arr[n];
    for (int i = 0;i < n;i++)
    {
        cin >> a[i] >> arr[i];
    }

    for (int i = 0;i < n;i++)
    {
        if(a[i]=='+')
            x+=arr[i];
        else{
            if(x>=arr[i])
            x-=arr[i];
            else
                d++;

        }
    }
    cout << x << " " << d;

    return 0;
}

