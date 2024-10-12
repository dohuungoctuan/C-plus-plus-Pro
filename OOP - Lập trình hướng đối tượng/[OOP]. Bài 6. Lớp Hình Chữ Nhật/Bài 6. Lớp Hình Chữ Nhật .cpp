#include<bits/stdc++.h>
using namespace std;
class hcn
{
private:
    long long cc, cr;
    string mau;
public:
    hcn()
    {

    }
    void chhoa()
    {
        string w = mau;
        w[0]=toupper(w[0]);
        for(int i=1;i<w.size();i++)
        w[i]=tolower(w[i]);
        mau = w;
    }
    friend istream& operator >> (istream& in, hcn& s)
    {
        cin>>s.cc>>s.cr;
        cin>>s.mau;
        return in;
    }
    friend ostream& operator << (ostream& out, hcn s)
    {
        cout<<(s.cc+s.cr)*2<<" "<<s.cc*s.cr<<" "<<s.mau;
        return out;
    }
    bool check()
    {
        if(cc<= 0 || cr <= 0)
            return false;
        return true;
    }
};
int main()
{
    hcn s;
    cin>>s;
    s.chhoa();
    if(s.check())
        cout<<s;
    else cout<<"INVALID";
}

