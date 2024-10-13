#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if(a%2!=0 && b%2==0)
        return true; //Đúng vị trí => không thay đổi
    if(a%2==0 && b%2!=0)
        return false;//Sai vị trí => thay đổi => chạy xuống dòng 11
    if(a%2!=0 && b%2!=0)
        return a > b;
    return a < b;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, cmp);
    for(auto x : a)
        cout<<x<<" ";
}
