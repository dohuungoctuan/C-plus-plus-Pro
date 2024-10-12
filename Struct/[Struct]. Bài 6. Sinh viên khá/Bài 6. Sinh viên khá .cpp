#include<bits/stdc++.h>
using namespace std;
struct SV
{
    string ten, ngth, que;
    double gpa;
};
void nhap(SV &s)
{
    getline(cin,s.ten);
    getline(cin,s.ngth);
    getline(cin,s.que);
    cin>>s.gpa;
}
void in(SV s)
{
    cout<<s.ten<<" "<<s.ngth<<" "<<s.que<<" ";
    cout<<fixed<<setprecision(2)<<s.gpa;
}
bool cmp(SV a, SV b)
{
    return a.ten<b.ten;
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
    for(int i=0;i<n;i++)
    {
        if(a[i].que=="Nam Dinh" && a[i].gpa>=2.5)
        {
            cout<<a[i].ten<<" "<<a[i].ngth<<" "<<a[i].que<<" ";
            cout<<fixed<<setprecision(2)<<a[i].gpa;
        }
        cout<<endl;
    }
}

