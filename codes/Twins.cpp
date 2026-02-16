#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];

int sumition(int c)
{
    int s =0;
    for(int i = 0;i<c;i++)
    {
        s +=arr[i];
    }
    return s;
}
int main() {


    int n;
    cin>>n;
    for(int i = 0;i< n;i++)
    {
        cin >>arr[i]; 
    }
    sort(arr,arr+n);

    int s=0; 
    int sum = 0;
    sum = sumition(n);
    for(int i = n-1;i>=0;i--)
    {
        s += arr[i];
        if(s>(sum-s))
        {
            cout << n-i;
            break;
        }
    }

    return 0;
}

