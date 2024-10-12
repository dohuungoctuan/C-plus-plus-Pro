#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
	string ma, ten, ns, lop;
	double gpa;
public:
	SinhVien(){

	}
	SinhVien(string ma, string ten, string ns, string lop, double gpa){
		this->ma = ma;
		this->ten = ten;
		this->ns = ns;
		this->lop = lop;
		this->gpa = gpa;
	}
	void chuanHoaTen(){
		stringstream ss(ten);
		string res = "", w;
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
	void chuanHoaNs(){
		if(ns[1] == '/') ns = "0" + ns;
		if(ns[4] == '/') ns.insert(3, "0");
	}
	void in(){
		cout << ma << " " << ten << " " << ns << " " << lop << " " << fixed << setprecision(2) << gpa << endl;
	}
	double getGpa(){
		return gpa;
	}
	string getMa(){
		return ma;
	}
	string getLop(){
		return lop;
	}
};
int main(){
	int n; cin >> n;
	SinhVien a[1000];
	for(int i = 0; i < n; i++){
		string ma, ten, ns, lop;
		double gpa;
		cin.ignore();
		getline(cin, ma);
		getline(cin, ten);
		getline(cin, ns);
		getline(cin, lop);
		cin >> gpa;
		SinhVien s(ma, ten, ns, lop, gpa);
		s.chuanHoaTen();
		s.chuanHoaNs();
		a[i] = s;
	}
	for(int i = 0; i < n; i++){
		if(a[i].getGpa() >= 2.5)
			a[i].in();
	}
}

