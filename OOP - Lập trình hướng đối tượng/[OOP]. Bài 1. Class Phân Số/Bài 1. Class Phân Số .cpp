    #include<bits/stdc++.h>
using namespace std;
class phanso
{
private:
    long long tu, mau;
public:
    phanso s(long long tu, long long mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    void toigian()
    {
        long long gcd = __gcd(tu,mau);
        tu = tu/gcd;
        mau = mau/gcd;
    }
    friend ostream& operator << (ostream &out, phanso s)
    {
        cout<<s.tu<<"/"<<s.mau;
        return out;
    }
    friend istream& operator >> (istream &in, phanso &s)
    {
        cin>>s.tu>>s.mau;
        return in;
    }
};
int main()
{
    long long tu, mau;
    phanso s;
    cin>>s;
    s.toigian();
    cout<<s;
}

