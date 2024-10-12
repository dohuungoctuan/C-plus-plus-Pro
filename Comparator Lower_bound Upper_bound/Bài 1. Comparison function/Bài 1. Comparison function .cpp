#include<bits/stdc++.h>
using namespace std;
int csc(int a)
{
    int dem=0;
    while(a)
    {
        int res=a%10;
        if(res%2==0)
            dem++;
        a/=10;
    }
    return dem;
}
int csl(int a)
{
    int dem=0;
    while(a)
    {
        int res=a%10;
        if(res%2!=0)
            dem++;
        a/=10;
    }
    return dem;
}
bool cmp(int a,int b)
{
    if(csc(a)!=csc(b))
        return csc(a)<csc(b);
    else return a<b;
}
bool cmp1(int a, int b)
{
    if(csl(a)==csl(b))
        return false;
    else return csl(a)<csl(b);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int>v;
    stable_sort(a,a+n,cmp1);
    for(auto x:a)
        v.push_back(x);
    sort(a,a+n,cmp);
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    for(auto x:v)
        cout<<x<<" ";

}


