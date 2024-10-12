#include<bits/stdc++.h>
using namespace std;
int scs(int n)
{
    int dem=0;
    while(n!=0)
    {
        int res=n%10;
        if(res==0 || res==6 || res==8)
            dem++;
        n/=10;
    }
    return dem;
}
bool cmp(int a,int b)
{
    if(scs(a)!=scs(b))
        return scs(a)>scs(b);
    else return a<b;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(auto x:a)
        cout<<x<<" ";
}

