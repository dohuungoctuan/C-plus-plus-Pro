#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Diem
{
    private:
        string ten;
        double a[10];
        double diemtb;
        int mts;
        static int ans;
    public:
        friend istream& operator >> (istream& in, Diem &x)
        {
            ++ans;
            x.mts = ans;
            scanf("\n");
            getline(in, x.ten);
            x.diemtb = 0;
            for(int i = 0 ; i < 10 ; i++)
            {
                in >> x.a[i];
                x.diemtb += x.a[i];
            }
            x.diemtb /= 10;
            return in;
        }
        friend ostream& operator << (ostream& out, Diem x)
        {
            out << "HS" << setw(2) << setfill('0') << x.mts << " " << x.ten << " "
            << fixed << setprecision(1)<< x.diemtb << " ";
            if(x.diemtb >= 9) cout << "XUAT SAC";
            else if(x.diemtb >= 8) cout << "GIOI";
            else if(x.diemtb >= 7) cout << "KHA";
            else if(x.diemtb >= 5) cout << "TB";
            else cout << "YEU";
            return out;
        }
        friend bool operator < (Diem a, Diem b)
        {
            return a.diemtb > b.diemtb;
        }
};
int Diem::ans = 0;
int main()
{
    int n; cin >> n;
    Diem a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    stable_sort(a, a + n);
    for(Diem x : a) cout << x << endl;
}
