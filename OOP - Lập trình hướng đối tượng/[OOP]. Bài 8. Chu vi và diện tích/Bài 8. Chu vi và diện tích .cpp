#include<bits/stdc++.h>
using namespace std;
class toado
{
private:
    double x,y;
public:
    friend istream& operator >> (istream& in, toado &s)
    {
        cin>>s.x>>s.y;
        return in;
    }
    friend double operator - ( toado a, toado b)
    {
        return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
    }
};
class tamgiac
{
private:
    toado a,b,c;
    double AB, BC, AC;
public:
    friend istream& operator >> (istream& in, tamgiac &s)
    {
        in>>s.a>>s.b>>s.c;
        s.AB = s.a-s.b;
        s.BC = s.b-s.c;
        s.AC = s.a-s.c;
        return in;
    }
    double chuvi()
    {
        return AB + BC + AC;
    }
    double dientich()
    {
        double p = chuvi()/2;
        return sqrt(p*(p-AB)*(p-BC)*(p-AC));
    }
    double getAB()
    {
        return AB;
    }
    double getBC()
    {
        return BC;
    }
    double getAC()
    {
        return AC;
    }
};
bool check(double a, double b, double c)
{
    if(a<=0 || b<=0 || c<=0 || a+b<c || b+c<a || a+c<b)
        return false;
    return true;
}
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        tamgiac s;
        cin>>s;
        if(check(s.getAB(), s.getAC(), s.getBC())==false)
            cout<<"INVALID"<<endl;
        else
        {
            cout<<fixed<<setprecision(3)<<s.chuvi()<<" ";
            cout<<fixed<<setprecision(3)<<s.dientich();
            cout<<endl;
        }

    }
}

