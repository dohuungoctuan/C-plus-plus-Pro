#include<bits/stdc++.h>
using namespace std;
int scs(int n)
{
    int dem=0;
    while(n!=0)
    {
        int res=n%10;
        if(res==2 || res==3 || res==5 || res==7)
            dem++;
        n/=10;
    }
    return dem;
}
bool cmp(int a,int b)
{
    if(scs(a)!=scs(b))
        return scs(a)>scs(b);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    stable_sort(a,a+n,cmp);
    for(auto x:a)
        cout<<x<<" ";
}

