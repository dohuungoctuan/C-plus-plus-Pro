#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien {
	private:
		string msv, hoTen, lop, email;
	public:
		friend istream& operator >> (istream& in, SinhVien &x) {
			cin >> x.msv;
			cin.ignore();
			getline(cin, x.hoTen);
			cin >> x.lop;
			cin >> x.email;
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien x) {
			cout << x.msv << " " << x.hoTen << " " << x.lop << " " << x.email ;
			return out;
		}
		string getNganh() {
			string s = "";
			int i = 0;
			while(isalpha(lop[i])) s += lop[i++];
			return s;
		}
};
int main()
{
	int n; cin >> n;
	SinhVien a[n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	int t; cin >> t;
	map<string,string>mp;
	mp["CNTT"] = "CONG NGHE THONG TIN";
	mp["DTVT"] = "DIEN TU VIEN THONG";
	mp["KT"] = "KE TOAN";
	mp["MKT"] = "MARKETING";
	while(t--) {
		string nganh; cin >> nganh;
		cout << "DANH SACH SINH VIEN NGANH " << mp[nganh] << " : " << endl;
		for(SinhVien x : a) {
			if(x.getNganh() == nganh) {
				cout << x << endl;
			}
		}
	}
}
