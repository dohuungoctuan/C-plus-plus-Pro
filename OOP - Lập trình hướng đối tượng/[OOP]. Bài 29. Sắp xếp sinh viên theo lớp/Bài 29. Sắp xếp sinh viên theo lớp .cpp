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
			if(lop != other.lop) return lop < other.lop;
			else return msv < other.msv;
		}
};
int main()
{
	int n; cin >> n;
    SinhVien a[n];
    for(SinhVien &x : a) {
    	cin >> x;
	}
	sort(a, a + n);
	for(SinhVien x : a) {
		cout << x << endl;
	}
}

