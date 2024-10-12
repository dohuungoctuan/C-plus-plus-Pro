#include<bits/stdc++.h>
using namespace std;
int k;
int ttd(int n)
{
    return abs(n-k);
}
bool cmp(int a,int b)
{
    if(ttd(a)!=ttd(b))
        return ttd(a)<ttd(b);
    else return a<b;
}
bool cmp1(int a,int b)
{
    if((a%2==0) && (b%2==0))
        return a<b;
    else if((a%2!=0) && (b%2==1))
        return a>b;
    else return a%2==0;
}
int main()
{
    int n;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    sort(a,a+n,cmp1);
    for(auto x:a)
        cout<<x<<" ";

}

