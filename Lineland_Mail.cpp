#include <iostream>
#include <cstdlib>
int arr[100000];
int main() {

    int n;
    std::cin >>n;
    for(int i = 0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    for(int i = 0;i<n;i++)
    {
        int mi,ma;
        if(i==0){
            mi= arr[i]-arr[i+1];
            ma = arr[i]-arr[n-1];
        }else if(i == n-1){
            mi = arr[i]-arr[i-1];
            ma = arr[i]-arr[0];
        }else{
            mi = std::min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
            ma = std::max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        }
        if(mi<0)
            mi = mi *-1;
        if(ma<0)
            ma = ma *-1;
        std::cout << mi <<" "<<ma<<std::endl; 
    }

    return 0;
}
