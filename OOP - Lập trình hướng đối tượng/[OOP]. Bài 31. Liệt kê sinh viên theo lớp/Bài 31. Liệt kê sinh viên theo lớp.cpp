#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien {
	private:
		string msv, hoTen, lop, email;
	public:
		friend istream& operator >> (istream& in, SinhVien &x) {
			in >> x.msv;
			in.ignore();
			getline(in, x.hoTen);
			in >> x.lop;
			in >> x.email;
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien x) {
			out << x.msv << " " << x.hoTen << " " << x.lop << " " << x.email ;
			return out;
		}
		bool operator < (SinhVien other) {
			return msv < other.msv;
		}
		string getLop() {
			return this->lop;
		}
};
int main()
{
	int n; cin >> n;
	vector<SinhVien>a(n);
	for(SinhVien &x : a) cin >> x;
	int t; cin >> t;
	while(t--) {
		string lop; cin >> lop;
		cout << "DANH SACH SINH VIEN LOP " << lop << " : " << endl;
		for(SinhVien x : a) {
			if(x.getLop() == lop) {
				cout << x << endl;
			}
		}
	}
}
