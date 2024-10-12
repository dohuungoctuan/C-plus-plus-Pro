#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool chuso(int n)
{
    int sum=0;
    while(n!=0)
    {
        int res=n%10;
        if(res!=2 && res!=3 && res!=5 && res!=7)
            return false;
        sum+=res;
        n/=10;
    }
    return nto(sum);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int dem=0;
    for(int i=a;i<=b;i++)
    {
        if(chuso(i) && nto(i))
            dem++;
    }
    cout<<dem;
}

