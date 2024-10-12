#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
typedef long long ll;
bool count(ll n)
{
    int dem=0;
    int dem1=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
                dem++;
            while(n%i==0)
            {
                    dem1++;
                    n/=i;
            }
        }
    }
    if(n>1)
    {
        dem++;
        dem1++;
    }
    if(dem==dem1 && dem==3)
            return true;
        return false;
    }
int main()
{
    long long n;
    cin>>n;
    if(count(n))
        cout<<"1";
    else cout<<"0";

}

