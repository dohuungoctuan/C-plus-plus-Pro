#include<bits/stdc++.h>
using namespace std;
class sinhvien
{
private:
    string ma, ten, ns, lop;
    double gpa;
public:
    sinhvien(string ma, string ten, string ns, string lop, double gpa)
    {
        this->ma = ma;
        this->ten = ten;
        this->ns = ns;
        this->lop = lop;
        this->gpa = gpa;
    }
    void chuanhoaten()
    {
        string res="";
        stringstream ss(ten);
        string w;
        while(ss>>w)
        {
            res+=toupper(w[0]);
            for(int i=1;i<w.size();i++)
                res+=tolower(w[i]);
            res+=" ";
        }
        res.pop_back();
        ten = res;
    }
    void chuanhoans()
    {
        if(ns[1]=='/') ns="0" + ns;
        if(ns[4]=='/') ns.insert(3,"0");
    }
    void in()
    {
        cout<<ma<<" "<<ten<<" "<<ns<<" "<<lop<<" "<<fixed<<setprecision(2)<<gpa<<endl;
    }
    friend ostream& operator << (ostream& out, sinhvien s)
    {
        cout<<s.ma<<" "<<s.ten<<" "<<s.ns<<" "<<" "<<s.lop<<" "<<fixed<<setprecision(2)<<s.gpa<<endl;
        return out;
    }
    friend istream& operator >> (istream &in , sinhvien &s)
    {
        getline(cin,s.ma);
        getline(cin,s.ten);
        getline(cin,s.ns);
        getline(cin,s.lop);
        cin>>s.gpa;
        return in;
    }
};
int main()
{
    string ma, ten, ns, lop;
    double gpa;
    sinhvien s(ma, ten, ns, lop, gpa);
    cin>>s;
    s.chuanhoaten();
    s.chuanhoans();
    cout<<s;
}

