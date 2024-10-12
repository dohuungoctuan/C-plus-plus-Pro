#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
    string ten, ns, que;
    double gpa;
};
void nhap(sinhvien &s)
{
    getline(cin,s.ten);
    getline(cin,s.ns);
    getline(cin,s.que);
    cin>>s.gpa;
}
void in(sinhvien s)
{
    cout<<s.ten<<" "<<s.ns<<" "<<s.que<<" "<<fixed<<setprecision(2)<<s.gpa;
}
int main()
{
    int n;
    cin>>n;
    sinhvien a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        nhap(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].gpa>=1)
        {
            in(a[i]);
            cout<<endl;
        }
    }
}

