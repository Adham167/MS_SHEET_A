#include <iostream>
using namespace std;

int M[] = {0,31,0,31,30,31,30,31,31,30,31,30,31};

bool checkLeapYear(int y)
{
    if((y%4==0&&y%100!=0)||y%400==0)
        return true;
    return false;
}
bool check(int d1,int m1,int y1,int d2,int m2,int y2)
{
    if(y1==y2){
        if(m1==m2){
            if(d1+1==d2)
                return true;
        }else if(m1+1==m2&&d1==M[m1]&&d2==1&&m1!=2){
            return true;
        }else if(m1==2)
            if(checkLeapYear(y1)){
                if(m1+1==m2&&d1==29&&d2==1)
                    return true;
            }else if(m1+1==m2&&d1==28&&d2==1)
                return true;
    }else if(y1+1==y2&&d1==31&&m1==12&&d2 ==1&&m2==1)
        return true;
    return false;
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

