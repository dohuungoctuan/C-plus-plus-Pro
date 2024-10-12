#include<bits/stdc++.h>
using namespace std;
void ptnt(long long n)
{
    long long res;
    long long dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            long long dem1=0;
            while(n%i==0)
            {
                dem1++;
                n/=i;
            }
            if(dem1>dem)
            {
                    res=i;
                    dem=dem1;
            }
        }
    }
    cout<<res<<" "<<dem;
}
int main()
{
    long long n;
    cin>>n;
    ptnt(n);
}

