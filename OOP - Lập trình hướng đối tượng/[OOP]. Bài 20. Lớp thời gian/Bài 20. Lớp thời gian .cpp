#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Time
{
    private:
        int gio, phut, giay;
    public:
        friend istream& operator >> (istream& in, Time &x)
        {
            in >> x.gio >> x.phut >> x.giay;
            return in;
        }
        friend ostream& operator << (ostream& out, Time x)
        {
            out << x.gio << " " << x.phut << " " << x.giay;
            return out;
        }
        friend bool operator < (Time a, Time b)
        {
            if(a.gio != b.gio) return a.gio < b.gio;
            else
            {
                if(a.phut != b.phut) return a.phut < b.phut;
                else return a.giay < b.giay;
            }
        }
};
int main()
{
    int n; cin >> n;
    Time a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << endl;
    }
}

