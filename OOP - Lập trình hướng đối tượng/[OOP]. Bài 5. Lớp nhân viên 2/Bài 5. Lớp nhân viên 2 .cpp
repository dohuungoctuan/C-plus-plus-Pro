#include<bits/stdc++.h>
using namespace std;

class NhanVien
{
    private:
        string mnv, ten, gioitinh, ngaysinh, diachi, mst, nkhd;
    public:
        friend istream& operator >> (istream& in, NhanVien &x)
        {
            x.mnv = "00001";
            getline(in, x.ten);
            getline(in, x.gioitinh);
            getline(in, x.ngaysinh);
            getline(in, x.diachi);
            getline(in, x.mst);
            getline(in, x.nkhd);
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien x)
        {
            out << x.mnv << " " << x.ten << " " << x.gioitinh << " " << x.ngaysinh << " "
            << x.diachi << " " << x.mst << " " << x.nkhd;
            return out;
        }
        friend void chuanHoaName(NhanVien&);
        friend void chuanHoaNgay(NhanVien&);
};
void chuanHoaName(NhanVien &t)
{
	string s = t.ten;
	stringstream ss(s);
	string x, res = "";
	while(ss >> x) {
		res += toupper(x[0]);
		for(int i = 1 ; i < x.size(); i++) {
			res += tolower(x[i]);
		}
		res += " ";
	}
	res.pop_back();
	t.ten = res;
}
void chuanHoaNgay(NhanVien &t) {
	if(t.ngaysinh[2] != '/') t.ngaysinh.insert(0, "0");
	if(t.ngaysinh[5] != '/') t.ngaysinh.insert(3, "0");

	if(t.nkhd[2] != '/') t.nkhd.insert(0, "0");
	if(t.nkhd[5] != '/') t.nkhd.insert(3, "0");
}
int main()
{
    NhanVien x; cin >> x;
    chuanHoaName(x); chuanHoaNgay(x);
    cout << x;
}
