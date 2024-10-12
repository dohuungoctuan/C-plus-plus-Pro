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
    void in()
    {
        cout<<ma<<" "<<ten<<" "<<ns<<" "<<lop<<" "<<fixed<<setprecision(2)<<gpa<<endl;
    }
};
int main()
{
    string ma, ten, ns, lop;
    double gpa;
    getline(cin,ma);
    getline(cin,ten);
    getline(cin,ns);
    getline(cin,lop);
    cin>>gpa;
    sinhvien s(ma, ten, ns, lop,gpa);
    s.in();
}

