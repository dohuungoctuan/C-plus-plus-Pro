#include<bits/stdc++.h>
using namespace std;
class nhanvien
{
private:
    static string ma;
    string ten, gt, ns, que, thue, hd;
public:
    nhanvien(){
    }
    void chuanhoa()
    {
        if(ns[1]=='/') ns = "0" +ns;
        if(ns[4]=='/') ns.insert(3,"0");
        if(hd[0]=='/') hd = "0" +hd;
        if(hd[4]=='/') hd.insert(3,"0");
    }
    friend ostream& operator << (ostream &out, nhanvien s)
    {
        cout<<s.ma<<" "<<s.ten<<" "<<s.gt<<" "<<s.ns<<" "<<s.que<<" "<<s.thue<<" "<<s.hd;
        return out;
    }
    friend istream& operator >> (istream &in, nhanvien &s)
    {
        getline(cin, s.ten);
        getline(cin, s.gt);
        getline(cin, s.ns);
        getline(cin, s.que);
        getline(cin, s.thue);
        getline(cin, s.hd);
        return in;
    }
};
string nhanvien::ma = "00001";
int main()
{
    nhanvien s;
    cin>>s;
    s.chuanhoa();
    cout<<s;
}

