#include<bits/stdc++.h>
using namespace std;
class toado
{
private:
    double x,y;
public:
    toado s(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
};
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double x,y,a,b;
        cin>>x>>y>>a>>b;
        toado s(double x, double y);
        toado k(double a, double b);
        cout<<fixed<<setprecision(4)<<sqrt(((x-a)*(x-a))+(y-b)*(y-b))<<endl;
    }
}

