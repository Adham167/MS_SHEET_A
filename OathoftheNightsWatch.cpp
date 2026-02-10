#include <iostream>
#include <algorithm>
using namespace std;
long long arr[1000010];

int main() {

    int n;
    cin>>n;
    int c= 0;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n==2||n==1)
    {
        cout<<0;
        return 0;
    }
    sort(arr,arr+n);
    for(int i = 1;i<n-1;i++)
    {
        if(arr[i]>arr[0]&&arr[i]<arr[n-1])
            c++;
    }
    cout <<c; 
    return 0;
}

