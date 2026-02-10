#include <iostream>
using namespace std;
int main()
{
    int n,s;long c;

    cin >> n>>s>>c;
    int arr[n];
    long long sum = 0;

    int e = 0;
    for(int i = 0;i<n;i++)
    {
        cin>> arr[i];
        if(arr[i]<=s){

            sum += arr[i];
            if(sum > c){
                e++;
                sum = 0;
            }
        }
    }

    cout << e;
    return 0;
}
