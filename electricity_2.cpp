#include <iostream>
using namespace std;

int M[] = {0,31,0,31,30,31,30,31,31,30,31,30,31};

bool checkLeapYear(int y)
{
    if((y%4==0&&y%100!=0)||y%400==0)
        return true;
    return false;
}
int daysInMonth(int m, int y){
    if(m == 2)
        return checkLeapYear(y) ? 29 : 28;
    int M[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    return M[m];
}

bool check(int d1,int m1,int y1,int d2,int m2,int y2){
    d1++;
    if(d1 > daysInMonth(m1, y1)){
        d1 = 1;
        m1++;
        if(m1 > 12){
            m1 = 1;
            y1++;
        }
    }
    return d1 == d2 && m1 == m2 && y1 == y2;
}

int main() {
    int n;
    while(cin>>n&&n!=0)
    {
        int d[n],m[n],y[n],c[n];
        int con = 0;
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            cin>> d[i]>>m[i]>>y[i]>>c[i];
            if(i!=0)
                if(check(d[i-1],m[i-1],y[i-1],d[i],m[i],y[i]))
                {
                    con++;
                    sum += c[i]-c[i-1];
                }

        }
        cout << con << " " << sum << endl;
    }

    return 0;
}
