#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
const int m = 100001;
int main() {
    int s,mod;
    int arr[m];
    while(cin >> s) 
    {
        cin >> mod;

        memset(arr,0,sizeof(arr));
        int seed = 0;
        for(int i = 0;i<mod;i++)
        {
            seed = (seed + s )%mod;
            arr[seed] = seed;
        }
        int c = 0;
//        for(int i = 0;i < mod;i++)
   //         cout << arr[i];
    //    cout << endl;
        for(int i = 1;i<mod;i++){
            if(arr[i]==0)
            {
                c++;
                break;
            }
        }
        cout << setw(10)<<s;
        cout << setw(10)<<mod;
        cout << "    " ;

        cout << (c?"bad Choice":"good choice") << endl;
    }
    return 0;
}

