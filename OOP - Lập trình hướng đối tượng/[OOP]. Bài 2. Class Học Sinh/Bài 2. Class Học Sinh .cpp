#include<bits/stdc++.h>
using namespace std;
class hocsinh
{
private:
    string ten, ns;
    double toan, ly, hoa;
public:
    hocsinh()
    {

    }
    hocsinh (string ten, string ns, double toan, double ly, double hoa)
    {
        this->ten = ten;
        this->ns = ns;
        this->toan = toan;
        this->ly = ly;
        this->hoa = hoa;
    }
    double tong()
    {
        double sum = toan + ly +hoa;
        return sum;
    }
    friend ostream& operator << (ostream& out, hocsinh s)
    {
        cout<<s.ten<<" "<<s.ns<<" "<<fixed<<setprecision(1)<<s.tong();
        return out;
    }
    friend istream& operator >> (istream &in, hocsinh &s)
    {
        getline(cin,s.ten);
        getline(cin,s.ns);
        cin>>s.toan>>s.ly>>s.hoa;
        return in;
    }
};
int main()
{
    hocsinh s;
    cin>>s;
    cout<<s;
}

