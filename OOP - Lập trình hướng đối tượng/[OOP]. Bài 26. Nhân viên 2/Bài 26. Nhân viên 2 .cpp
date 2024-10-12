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
        friend bool cmp(NhanVien a, NhanVien b);
};
void chuanHoa(NhanVien &x)
{
    if(x.ngaysinh[2] != '/') x.ngaysinh.insert(0, "0");
    if(x.ngaysinh[5] != '/') x.ngaysinh.insert(3, "0");
    if(x.nkhd[2] != '/') x.nkhd.insert(0, "0");
    if(x.nkhd[5] != '/') x.nkhd.insert(3, "0");
}
int NhanVien::ans = 0;
string tuoi(string s)
{
    string res="";
    int tmp1=s.find("/");
    int tmp2=s.rfind("/");
    res+=s.substr(tmp2+1);
    res+=s.substr(tmp1+1,tmp2-3);
    res+=s.substr(0,2);
    return res;
}
bool cmp(NhanVien a, NhanVien b)
{
    if(tuoi(a.ngaysinh)!=tuoi(b.ngaysinh))
        return tuoi(a.ngaysinh)<tuoi(b.ngaysinh);
    return a.mnv<b.mnv;
}
int main()
{
    int n ; cin >> n;
    NhanVien a[n];
    for(int i= 0 ;i < n ;i++)
    {
        cin.ignore();
        a[i].nhap();
        chuanHoa(a[i]);
    }
    sort(a,a+n,cmp);
    for(int i= 0 ;i < n ;i++)
    {
        a[i].in();
        cout<<endl;
    }
}


