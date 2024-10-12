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
bool cmp(sinhvien a, sinhvien b)
{
    if(a.que != b.que)
        return a.que<b.que;
    return a.gpa>b.gpa;
}
int main()
{
    int n;
    cin>>n;
    sinhvien a[n];
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        nhap(a[i]);
        mp[a[i].que]++;
    }
    int max_val=0;
    for(auto x:mp)
        max_val=max(max_val,x.second);
    for(auto x:mp)
    {
        if(x.second==max_val)
            cout<<x.first<<endl;
    }

}

