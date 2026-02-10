#include <iostream>
using namespace std;

int main() {

    int n;
    cin >>n;
    int arr[101];
    for(int i = 0;i< n;i++)
    {
        int p;
        cin >>p;
        arr[p-1] = i+1;
    }
    for(int i = 0;i< n;i++)
        cout << arr[i]<<" ";

    return 0;
}

