#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien
{
    private:
        string msv, ten, lop, email;
    public:
        SinhVien(string msv, string ten, string lop, string email)
        {
            this->msv = msv;
            this->ten = ten;
            this->lop = lop;
            this->email = email;
        }
        friend ostream& operator << (ostream& out, SinhVien x)
        {
            out << x.msv << " " << x.ten << " " << x.lop << " " << x.email;
            return out;
        }
        friend bool operator < (SinhVien a, SinhVien b)
        {
            return a.msv < b.msv;
        }
};

int main()
{
    vector<SinhVien>v;
    string msv, ten, lop, email;
    while(cin >> msv)
    {
        cin.ignore();
        getline(cin, ten);
        cin >> lop;
        cin >> email;
        v.push_back(SinhVien(msv, ten, lop, email));
    }
    sort(v.begin(), v.end());
    for(SinhVien x : v) cout << x << endl;
}

