#include<bits/stdc++.h>
using namespace std;
class nhanvien
{
private:
    string ten, cvu;
    long long lcb, ngay;
    static string ma;
public:
    friend istream& operator >> (istream& in, nhanvien &s)
    {
        getline(cin,s.ten);
        cin>>s.lcb;
        cin>>s.ngay;
        cin>>s.cvu;
        return in;
    }
    friend int phucap (nhanvien s);
    friend long long thuong(nhanvien s);
    friend long long luongchinh(nhanvien s);
    friend ostream& operator << (ostream& out, nhanvien s)
    {
        cout<<s.ma<<" "<<s.ten<<" "<<luongchinh(s)<<" "<<thuong(s)<<" "<<phucap(s)<<" "<<luongchinh(s)+thuong(s)+phucap(s);
        return out;
    }
};
string nhanvien::ma = "NV01";
int phucap(nhanvien s)
{
    if(s.cvu=="GD")
        return 250000;
    else if(s.cvu=="PGD")
        return 200000;
    else if(s.cvu=="TP")
        return 180000;
    else if(s.cvu=="NV")
        return 150000;
}
long long thuong(nhanvien s)
{
    if(s.ngay>=25)
        return luongchinh(s) * 0.2;
    else if(s.ngay<25 && s.ngay>=22)
        return luongchinh(s) * 0.1;
    else return 0;
}
long long luongchinh(nhanvien s)
{
    return s.lcb * s.ngay;
}
int main()
{
    nhanvien s;
    cin>>s;
    cout<<s;
}

