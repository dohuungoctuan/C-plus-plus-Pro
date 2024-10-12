#include<bits/stdc++.h>
using namespace std;
int tknp1(int a[],int n, int x)
{
    int l=0; int r=n-1;
    int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            res=m;
            r=m-1;
        }
        else if(a[m]>x)
            r=m-1;
        else l=m+1;
    }
    return res;
}
int tknp2(int a[],int n, int x)
{
    int l=0; int r=n-1;
    int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            res=m;
            l=m+1;
        }
        else if(a[m]>x)
            r=m-1;
        else l=m+1;
    }
    return res;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    auto it1=lower_bound(a,a+n,x);
    if((it1-a)!=n)
        cout<<(it1-a)<<endl;
    else cout<<"-1"<<endl;
    auto it2=upper_bound(a,a+n,x);
    if((it2-a)!=n)
        cout<<(it2-a)<<endl;
    else cout<<"-1"<<endl;
    cout<<tknp1(a,n,x)<<endl;
    cout<<tknp2(a,n,x)<<endl;
    if(tknp1(a,n,x)!=-1)
        cout<<tknp2(a,n,x)-tknp1(a,n,x)+1;
    else cout<<"0";

}

