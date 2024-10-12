#include<bits/stdc++.h>
using namespace std;
struct sophuc
{
    int thuc;
    int ao;
};
void nhap(sophuc &s)
{
    cin>>s.thuc>>s.ao;
}
int main()
{
    sophuc a;
    sophuc b;
    nhap(a); nhap(b);
    cout<<a.thuc+b.thuc<<" "<<a.ao+b.ao<<endl;
    cout<<a.thuc-b.thuc<<" "<<a.ao-b.ao<<endl;
    cout<<a.thuc*b.thuc-a.ao*b.ao<<" "<<a.thuc*b.ao+b.thuc*a.ao;
}

