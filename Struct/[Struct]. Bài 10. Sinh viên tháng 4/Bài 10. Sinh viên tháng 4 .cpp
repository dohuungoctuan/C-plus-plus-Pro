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
int thang(string a)
{
    vector<char>v;
    int k=a.find('/');
    for(int i=k+1;i<a.size();i++)
    {
        if(a[i]=='/')
            break;
        v.push_back(a[i]);
    }
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum*10+(int)(v[i]-48);
    }
    return sum;

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
        if(thang(a[i].ngth)==4)
        {
            cout<<a[i].ten<<" "<<a[i].ngth<<" "<<a[i].que<<" ";
            cout<<fixed<<setprecision(2)<<a[i].gpa;
            cout<<endl;
        }
    }
}

