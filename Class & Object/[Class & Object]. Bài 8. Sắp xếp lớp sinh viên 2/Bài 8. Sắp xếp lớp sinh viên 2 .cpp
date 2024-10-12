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
	string getNs(){
		return ns;
	}
};

bool cmp(SinhVien x, SinhVien y){
	stringstream ss1(x.getNs()), ss2(y.getNs());
	int d1, m1, y1, d2, m2, y2;
	string tmp;
	getline(ss1, tmp, '/'); d1 = stoi(tmp);
	getline(ss1, tmp, '/'); m1 = stoi(tmp);
	getline(ss1, tmp, '/'); y1 = stoi(tmp);
	getline(ss2, tmp, '/'); d2 = stoi(tmp);
	getline(ss2, tmp, '/'); m2 = stoi(tmp);
	getline(ss2, tmp, '/'); y2 = stoi(tmp);
	if(y1 != y2) return y1 < y2;
	if(m1 != m2) return m1 < m2;
	if(d1 != d2) return d1 < d2;
	return x.getMa() < y.getMa();
}

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
	sort(a, a + n, cmp);
	for(int i = 0; i < n; ++i){
		a[i].in();
	}
}

