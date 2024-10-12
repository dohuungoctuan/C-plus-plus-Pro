#include<bits/stdc++.h>
using namespace std;
struct phanso
{
    int tu; int mau;
};
void nhap(phanso &s)
{
    cin>>s.tu>>s.mau;
}
int main()
{
    phanso a;
    phanso b;
    nhap(a); nhap(b);
    int tmp1=__gcd(a.tu,a.mau);
    int tmp2=__gcd(b.tu,b.mau);
    cout<<a.tu/tmp1<<'/'<<a.mau/tmp1<<endl;
    cout<<b.tu/tmp2<<'/'<<b.mau/tmp2<<endl;
    int lcm=a.mau/__gcd(a.mau,b.mau)*b.mau;
    int tongtu=(lcm/a.mau*a.tu)+(lcm/b.mau*b.tu);
    int hieutu=(lcm/a.mau*a.tu)-(lcm/b.mau*b.tu);
    cout<<tongtu/__gcd(tongtu,lcm)<<'/'<<lcm/__gcd(tongtu,lcm)<<endl;
    cout<<hieutu/abs(__gcd(hieutu,lcm))<<'/'<<lcm/abs(__gcd(hieutu,lcm));

}

