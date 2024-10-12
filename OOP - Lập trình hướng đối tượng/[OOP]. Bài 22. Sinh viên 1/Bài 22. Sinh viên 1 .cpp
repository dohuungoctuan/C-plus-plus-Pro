#include <bits/stdc++.h>
using namespace std;
using ll=long long;

class sv{
    private:
        string ma,name,ns,lop;
        double gpa;
    public:
        sv(string a,string b,string c,string d,double e){
            if (stoi(a) <= 9)
               ma = "SV00" + a;
            else
                ma = "SV0" + a;
            name=b;
            lop=c;
            ns=d;
            gpa=e;
        }
        void chuan_hoa(){
            if(ns[2]!='/') ns="0"+ns;
            if (ns[5] != '/')
                ns.insert(3, "0");

        }
        void in(){
            chuan_hoa();
            cout<<ma<<" "<<name<<" "<<lop<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa<<endl;
        }
};
int main(){
    int n;cin>>n;cin.ignore();
    for(int i=0;i<n;i++){

        string b;getline(cin,b);
        string c;getline(cin,c);
        string d;getline(cin,d);
        double e;cin>>e;cin.ignore();
        sv a(to_string((i+1)),b,c,d,e);

        a.in();
    }
}
