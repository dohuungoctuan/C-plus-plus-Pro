#include<bits/stdc++.h>
using namespace std;
class sinhvien
{
private:
    string ma, ten;
    double toan, ly, hoa;
public:
    friend istream& operator >> (istream& in, sinhvien &s)
    {
        getline(cin,s.ma);
        getline(cin,s.ten);
        cin>>s.toan>>s.ly>>s.hoa;
        return in;
    }
    friend int khuvuc(sinhvien s);
    friend double thuong(sinhvien s);
    friend double diem(sinhvien s);
    friend string check(sinhvien s);
    friend ostream& operator << (ostream& out, sinhvien s)
    {
        cout<<s.ma<<" "<<s.ten<<" "<<khuvuc(s)<<" "<<diem(s) + thuong(s)<<" "<<check(s);
        return out;
    }
};
int khuvuc(sinhvien s)
{
    string tmp = s.ma;
    string res = tmp.substr(0,3);
    int k = res.back() - 48;
    return k;
}
double thuong(sinhvien s)
{
    if(khuvuc(s)==1)
        return 0.5;
    else if(khuvuc(s)==2)
        return 1;
    else return 2.5;
}
double diem(sinhvien s)
{
    double res = s.toan + s.ly + s.hoa;
    return res;
}
string check(sinhvien s)
{
    double res = diem(s) + thuong(s);
    if(res<24)
        return "TRUOT";
    else return "TRUNG TUYEN";
}
int main()
{
    sinhvien s;
    cin>>s;
    cout<<s;
}

