#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k; 
    cin >> n >> k;
    char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<char> v22 (n);
    for(int i = 0; i < n;i++)
    {
       v22[i]= arr[i%k]; 
    }
    for(int i = 0; i < n;i++)
    {
       cout << v22[i];
    }
    return 0;
}

