#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien
{
    private:
        string msv, ten, ngaysinh, lop;
        double gpa;
        static int ans;
    public:
        friend istream& operator >> (istream& in, SinhVien &x)
        {
            ++ans;
            x.msv = to_string(ans);
            while(x.msv.size() < 3) x.msv = "0" + x.msv;
            x.msv = "SV" + x.msv;
            in.ignore();
            getline(in, x.ten);
            in >> x.lop >>x.ngaysinh >>x.gpa;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien x)
        {
            out << x.msv << " " << x.ten << " " << x.lop << " " << x.ngaysinh << " "<< fixed << setprecision(2) << x.gpa;
            return out;
        }
        friend void chuanhoa(SinhVien&);
        friend void ten(SinhVien&);
        friend bool operator < (SinhVien a, SinhVien b)
        {
            return a.gpa > b.gpa;
        }
};
int SinhVien::ans = 0;
void chuanhoa(SinhVien &x)
{
    if(x.ngaysinh[2] != '/') x.ngaysinh.insert(0, "0");
    if(x.ngaysinh[5] != '/') x.ngaysinh.insert(3, "0");
}
void ten(SinhVien &t)
{
    string s = t.ten;
    stringstream ss(s);
    string x, res = "";
    while(ss >> x)
    {
        x[0] = toupper(x[0]);
        for(int i = 1 ; i < x.size(); i++)
        {
            x[i] = tolower(x[i]);
        }
        res += x + " ";
    }
    res.pop_back();
    t.ten = res;
}
int main()
{
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        chuanhoa(a[i]);
        ten(a[i]);
    }
    stable_sort(a, a + n);
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << endl;
    }
}
