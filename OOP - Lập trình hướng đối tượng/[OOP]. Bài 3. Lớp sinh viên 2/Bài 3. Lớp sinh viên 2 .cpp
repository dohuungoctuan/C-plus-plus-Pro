#include<bits/stdc++.h>
using namespace std;
class sinhvien
{
private:
    string ten, lop, ns;
    double gpa;
    static string ma;
public:
    sinhvien()
    {

    }
    void chuanhoans()
    {
        if(ns[1]=='/') ns = "0" + ns;
        if(ns[4]=='/') ns.insert(3,"0");
    }
    friend ostream& operator << (ostream& out, sinhvien s)
    {
        cout<<s.ma<<" "<<s.ten<<" "<<s.lop<<" "<<s.ns<<" "<<fixed<<setprecision(1)<<s.gpa;
        return out;
    }
    friend istream& operator >> (istream &in, sinhvien &s)
    {
        getline(cin, s.ten);
        getline(cin, s.lop);
        getline(cin, s.ns);
        cin>>s.gpa;
        return in;
    }
};
string sinhvien::ma = "SV001";
int main()
{
    sinhvien s;
    cin>>s;
    s.chuanhoans();
    cout<<s;
}

