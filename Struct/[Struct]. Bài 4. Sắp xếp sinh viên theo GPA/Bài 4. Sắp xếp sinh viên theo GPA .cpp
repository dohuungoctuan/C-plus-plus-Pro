#include<bits/stdc++.h>
using namespace std;
struct SV
{
    string ten;
    string ngay;
    string thph;
    double gpa;
};
void nhap(SV &s)
{
    getline(cin,s.ten);
    getline(cin,s.ngay);
    getline(cin,s.thph);
    cin>>s.gpa;
}
void in(SV s)
{
    cout<<s.ten<<" "<<s.ngay<<" "<<s.thph<<" ";
    cout<<fixed<<setprecision(2)<<s.gpa;
}
bool cmp(SV a, SV b)
{
    return a.gpa>b.gpa;
}
int main()
{
    int n;
    cin>>n;
    SV a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        nhap(a[i]);
    }
    stable_sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        in(a[i]);
        cout<<endl;
    }
}

