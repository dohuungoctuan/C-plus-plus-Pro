#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ma, ten, ns, lop;
    double gpa;
    int drl;
public:
    SinhVien(){

    }
    SinhVien(string ma, string ten, string ns, string lop, double gpa, int drl){
        this->ma = ma;
        this->ten = ten;
        this->ns = ns;
        this->lop = lop;
        this->gpa = gpa;
        this->drl = drl;
    }
    void chuanHoaTen(){
        stringstream ss(ten);
        string res = "";
        string w;
        while(ss >> w){
            res += toupper(w[0]);
            for(int i = 1; i < w.size(); i++){
                res += tolower(w[i]);
            }
            res += " ";
        }
        res.pop_back();
        ten = res;
    }
    void chuanHoaNgSinh(){
        if(ns[1] == '/') ns = "0" + ns;
        if(ns[4] == '/') ns.insert(3, "0");
    }
    void printInformation(){
        cout << ma << " " << ten << " " << ns << " " << lop << " " << fixed << setprecision(2) << gpa << " " << drl << endl;
    }
    double getGpa(){
        return gpa;
    }
    string getMa(){
        return ma;
    }
    string getSortedName(){
        stringstream ss(ten);
        string res = "", w;
        vector<string> v;
        while(ss >> w) v.push_back(w);
        res = v.back();
        for(int i = 0; i < v.size() - 1; i++) res += " " + v[i];
        return res;
    }
    string getLop(){
        return lop;
    }
    int getDrl(){
        return drl;
    }
};

bool cmp(SinhVien x, SinhVien y){
    if(x.getGpa() != y.getGpa())
        return x.getGpa() > y.getGpa();
    return x.getDrl() > y.getDrl();
}

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ma, ten, ns, lop;
        double gpa; int drl;
        getline(cin, ma);
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, lop);
        cin >> gpa >> drl;
        SinhVien s(ma, ten, ns, lop, gpa, drl);
        s.chuanHoaTen(); s.chuanHoaNgSinh();
        a[i] = s;
    }
    sort(a, a + n, cmp);
    for(SinhVien x : a){
        x.printInformation();
    }
}

