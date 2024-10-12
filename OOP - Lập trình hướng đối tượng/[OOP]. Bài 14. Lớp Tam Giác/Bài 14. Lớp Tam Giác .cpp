#include<bits/stdc++.h>
using namespace std;
class point
{
private:
    double x1, y1, x2, y2;
public:
    point(double a1, double b1, double a2, double b2)
    {
        x1 = a1;
        y1 = b1;
        x2 = a2;
        y2 = b2;
    }
    double getDistance()
    {
        double dx = x2 - x1;
        double dy = y2 - y1;
        return sqrt(dx*dx + dy*dy);
    }
};
bool tamgiac(double a, double b, double c)
{
    return a>0 && b>0 && c>0 && ( a+b > c ) && ( b+c > a) && ( a+c > b );
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        double x1, y1, x2, y2, x3, y3;
        cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        point d(x1,y1,x2,y2), d1(x1,y1,x3,y3), d2(x2,y2,x3,y3);
        double a = d.getDistance();
        double b = d1.getDistance();
        double c = d2.getDistance();

        if(tamgiac(a,b,c))
        {
            double cvi = a + b + c;
            double p = (a + b +c) / 2;
            double dtich = sqrt(p * (p-a) * (p-b) * (p-c));
            cout<<fixed<<setprecision(3)<<cvi<<" "<<dtich<<endl;
        }
        else cout<<"INVALID"<<endl;
    }
    return 0;
}

