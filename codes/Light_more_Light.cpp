#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long i;

    while(cin >> i && i != 0)
    {
        long c = sqrt(i);
        if((c *c)==i)
            cout <<"yes"<< endl; 
        else
            cout << "no" << endl;

    }
    return 0;
}

