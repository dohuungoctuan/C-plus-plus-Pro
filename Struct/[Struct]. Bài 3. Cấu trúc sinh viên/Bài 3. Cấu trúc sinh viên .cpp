#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
    string ten, ns, que;
    int toan, ly, hoa;
};
void nhap(sinhvien &s)
{
    getline(cin,s.ten);
    getline(cin,s.ns);
    getline(cin,s.que);
    cin>>s.toan>>s.ly>>s.hoa;
}
int diem(int a, int b, int c)
{
    int tong=a+b+c;
    return tong;
}
void in(sinhvien s)
{
    cout<<s.ten<<" "<<s.ns<<" "<<s.que<<" "<<diem(s.toan,s.ly,s.hoa);
}
int main()
{
    int n;
    cin>>n;
    sinhvien a[n];
    int max_val=0;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        nhap(a[i]);
        int tmp=diem(a[i].toan,a[i].ly,a[i].hoa);
        max_val=max(max_val,tmp);
    }
    cout<<"DANH SACH THU KHOA :\n";
    for(int i=0;i<n;i++)
    {
        int tmp=diem(a[i].toan,a[i].ly,a[i].hoa);
        if(tmp==max_val)
        {
            in(a[i]);
            cout<<endl;
        }
    }
    cout<<"KET QUA XET TUYEN:\n";
    for(int i=0;i<n;i++)
    {
        in(a[i]);
        if(diem(a[i].toan,a[i].ly,a[i].hoa)>=24)
            cout<<" DO";
        else cout<<" TRUOT";
        cout<<endl;
    }
}

