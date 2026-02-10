#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int s;
    cin >> s;
    int a1[s];
    int a2[s];
    for(int i = 0;i< s;i++)
    {
        cin >> a1[i]>>a2[i];
        a1[i]-=1;
        if(a1[i]==0)
        {
            arr[a1[i]+1] += (arr[a1[i]]-a2[i]);
            arr[a1[i]] =0;
        }else if(a1[i]== n-1){
            arr[a1[i]-1] += (a2[i]-1);
            arr[a1[i]]=0;
        }else{

            arr[a1[i]+1] += (arr[a1[i]]-a2[i]);

            arr[a1[i]-1] += a2[i]-1;

            arr[a1[i]]=0;
        }
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
