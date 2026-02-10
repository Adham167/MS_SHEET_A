#include <iostream>
using namespace std;

int A[100] = {0};
int B[100] = {0};
int C[100] = {0};

int search(int t)
{
    for (int i =0;B[i]!=0;i++) //2 3 4 1 
    {
        if(B[i]==t)
            return i+1;
    }
    return 0;
}

int main() {

    int n;
    cin >> n; 
    for(int i  =0;i< n;i++)
    {
        A[i] = i+1;
        cin>> B[i];
    }
    for(int i  = 0; i < n;i++)
    {
        C[i]=search(i+1);
    }
    for(int i =0;i< n;i++)
    {
        cout << C[i] << " ";
    }



    return 0;
}

