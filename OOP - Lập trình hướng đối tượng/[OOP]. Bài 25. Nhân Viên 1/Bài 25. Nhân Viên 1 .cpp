#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
    private :
        string mnv , hoten , gioitinh, ngaysinh;
        string diachi, mst , nkhd;
        static int ans;
    public :
        void nhap()
        {
            ++ans;
            mnv = to_string(ans);
            while(mnv.size() < 5)
            {
                mnv = "0" + mnv;
            }
            getline(cin , hoten);
            cin >> gioitinh >> ngaysinh;
            cin.ignore();
            getline(cin , diachi);
            cin >> mst >> nkhd;
        }
        void in()
        {
            cout << mnv << " " << hoten << " " << gioitinh << " " << ngaysinh << " " <<diachi
            << " " << mst << " " << nkhd;
        }
        friend void chuanHoa(NhanVien&);
};
void chuanHoa(NhanVien &x)
{
    if(x.ngaysinh[2] != '/') x.ngaysinh.insert(0, "0");
    if(x.ngaysinh[5] != '/') x.ngaysinh.insert(3, "0");
    if(x.nkhd[2] != '/') x.nkhd.insert(0, "0");
    if(x.nkhd[5] != '/') x.nkhd.insert(3, "0");
}
int NhanVien::ans = 0;
int main()
{
    int n ; cin >> n;
    for(int i= 0 ;i < n ;i++)
    {
        cin.ignore();
        NhanVien x ; x.nhap();
        chuanHoa(x);
        x.in();
        cout << endl;
    }
}

