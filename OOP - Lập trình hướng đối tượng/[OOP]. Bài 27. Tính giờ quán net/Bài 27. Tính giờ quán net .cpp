#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Time
{
    private:
        string username, password, ten, giovao, giora;
        int phutchoi;
    public:
        friend istream& operator >> (istream& in, Time& x)
        {
            getline(in, x.username);
            getline(in, x.password);
            getline(in, x.ten);
            in >> x.giovao >> x.giora;
            int phutvao = stoi(x.giovao.substr(0, 2)) * 60 + stoi(x.giovao.substr(3, 2));
            int phutra = stoi(x.giora.substr(0, 2)) * 60 + stoi(x.giora.substr(3, 2));
            x.phutchoi = phutra - phutvao;
            return in;
        }
        friend ostream& operator << (ostream& out, Time x)
        {
            out << x.username << " " << x.password << " " << x.ten
            << " " << x.phutchoi / 60 << " gio " << x.phutchoi % 60 << " phut" << endl;
            return out;
        }
        friend bool operator < (Time a, Time b)
        {
            if(a.phutchoi != b.phutchoi) return a.phutchoi > b.phutchoi;
            else return a.username < b.username;
        }
};
int main()
{
    int n; cin >> n;
    Time a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin.ignore();
        cin >> a[i];
    }
    sort(a, a + n);
    for(Time x : a) cout << x;
}
