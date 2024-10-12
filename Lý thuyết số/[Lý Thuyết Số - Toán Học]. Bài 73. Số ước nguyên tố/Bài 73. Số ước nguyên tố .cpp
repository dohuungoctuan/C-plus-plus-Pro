#include<bits/stdc++.h>
using namespace std;
long long ptnt(long long n)
{
    int dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            dem++;
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
        dem++;
    return dem;
}
int main()
{
    long long n;
    cin>>n;
    cout<<ptnt(n);
}

