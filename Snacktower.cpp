#include <iostream>
using namespace std;

int arr[100000];
int main() {

    int n;
    int a,b;
    cin>>n; 
    int curr = n;
    for(int i = 0;i<n;i++)
    {
        int num;
        cin >> num;
        arr[num] =1;
        while(arr[curr]==1)
        {
            cout << curr << " ";
            curr--;
        }
        cout << endl;
    }



    return 0;
}

