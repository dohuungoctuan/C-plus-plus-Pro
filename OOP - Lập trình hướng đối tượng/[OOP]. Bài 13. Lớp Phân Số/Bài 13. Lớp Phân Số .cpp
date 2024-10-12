#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class PhanSo
{
    private:
        ll tu, mau;
    public:
        friend istream& operator >> (istream& in, PhanSo &x)
        {
            in >> x.tu >> x.mau;
            return in;
        }
        friend ostream& operator << (ostream& out, PhanSo x)
        {
            ll mc = __gcd(x.tu, x.mau);
            x.tu /= mc;
            x.mau /= mc;
            out << x.tu << "/" << x.mau;
            return out;
        }
        friend PhanSo operator + (PhanSo a, PhanSo b)
        {
            PhanSo tmp;
            tmp.tu = a.tu * b.mau + b.tu * a.mau;
            tmp.mau = a.mau * b.mau;
            return tmp;
        }
        friend PhanSo operator * (PhanSo a, PhanSo b)
        {
            PhanSo tmp;
            tmp.tu = a.tu * b.tu;
            tmp.mau = a.mau * b.mau;
            return tmp;
        }
};
int main()
{
    int t; cin >> t;
    while(t--)
    {
        PhanSo A, B; cin >> A >> B;
        PhanSo C = (A + B) * (A + B);
        PhanSo D = A * B * C;
        cout << C << " " << D << endl;
    }
}
