#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
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
int ptnt(int n)
{
    long long ans=1;
    for(int i=2;i<=n;i++)
    {
        if(nto(i))
        {
            long long res=0;
            long long tmp=i;
            while(tmp<=n)
            {
                res+=(n/tmp)%mod;
                res%=mod;
                tmp*=i;
            }
            ans*=((res+1)%mod);
            ans%=mod;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<ptnt(n);
}

