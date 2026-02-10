#include <iostream>
using namespace std;
const int size = 5001;
int arr[5001];
int arr1[5001];
int arr2[5001];
int arr3[5001];

int main() {

    int n;
    cin >> n;
    int t=0;
    int c1=0,c2=0,c3=0;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            arr1[c1] = i;
            c1++;
        }
        else if(arr[i]==2)
        {
            arr2[c2] = i;
            c2++;
        }
        else 
        {
            arr3[c3] = i;
            c3++;
        }
    }
    t = min(c1,min(c2,c3));
    cout << t<<endl;
    for(int i = 0;i < t;i++)
    {
        cout << arr1[i]+1 << " "<<arr2[i]+1 << " " << arr3[i] +1<< endl;
    }
    return 0;
}

