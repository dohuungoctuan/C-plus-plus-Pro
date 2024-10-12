#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

class MatHang {
	private:
		int mmh;
		string tenMh, donViTinh;
		ll giaMua, giaBan;
	public:
		MatHang(int mmh, string ten, string donViTinh, ll giaMua, ll giaBan) {
			this->mmh = mmh;
			this->tenMh = ten;
			this->donViTinh = donViTinh;
			this->giaMua = giaMua;
			this->giaBan = giaBan;
		}
		friend ostream& operator << (ostream& out, MatHang x) {
			out << "MH" << setw(4) << setfill('0') << x.mmh << " " <<
				x.tenMh << " " << x.donViTinh << " " << x.giaMua << " " << x.giaBan << " " << x.giaBan - x.giaMua;
			return out;
		}
		friend bool operator < (MatHang a, MatHang b) {
			return (a.giaBan - a.giaMua) > (b.giaBan - b.giaMua);
		}
};

int main() {
	int n; cin >> n;
	vector<MatHang>a;
	for(int i = 1 ; i <= n ; i++) {
		cin.ignore();
		string tenMh, donViTinh;
		getline(cin, tenMh); getline(cin, donViTinh);
		ll giaBan, giaMua; cin >> giaMua >> giaBan;

		a.push_back(MatHang(i, tenMh, donViTinh, giaMua, giaBan));
	}
	stable_sort(a.begin(), a.end());
	for(MatHang x : a) cout << x << endl;
}

