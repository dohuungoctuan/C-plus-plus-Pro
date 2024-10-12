#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ptnt( ll n )
{
    int ans=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int dem=0;
            while(n%i==0)
            {
                dem++;
                n/=i;
            }
            ans*=(dem+1);
        }
    }
    if(n>1)
        ans*=2;
    return ans;
}
int main()
{
    long long n;
    cin>>n;
    cout<<ptnt(n);
}

