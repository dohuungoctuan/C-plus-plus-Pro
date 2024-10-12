#include<bits/stdc++.h>
using namespace std;
class giaovien
{
private:
    string bac, ten;
    long long luong;
public:
    friend istream& operator >> (istream& in, giaovien &s)
    {
        getline(cin,s.bac);
        getline(cin,s.ten);
        cin>>s.luong;
        return in;
    }
    friend string vitri(giaovien s);
    friend int bacso(giaovien);
    friend long long luongchinh(giaovien);
    friend ostream& operator << (ostream& out,giaovien s)
    {
        cout<<s.bac<<" "<<s.ten<<" "<<bacso(s)<<" "<<luongchinh(s);
        return out;
    }
};
string vitri(giaovien s)
{
    string tmp = s.bac;
    string res=tmp.substr(0,2);
    return res;
}
int bacso(giaovien s)
{
    string tmp = s.bac;
    int res = stoi(tmp.substr(2));
    return res;
}
long long luongchinh(giaovien s)
{
    int tmp;
    if(vitri(s)=="HT")
        tmp = 2000000;
    else if(vitri(s)=="HP")
        tmp = 900000;
    else tmp = 500000;
    long long res = s.luong * bacso(s) + tmp;
    return res;
}
int main()
{
    giaovien s;
    cin>>s;
    cout<<s;
}

