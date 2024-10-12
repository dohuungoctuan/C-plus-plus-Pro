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
    while(n!=0)
    {
        int res=n%10;
        if(!nto(res))
            return false;
        n/=10;
    }
    return true;
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

