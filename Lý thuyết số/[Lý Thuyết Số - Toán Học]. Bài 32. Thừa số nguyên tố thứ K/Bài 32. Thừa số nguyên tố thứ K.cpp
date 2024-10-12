#include<bits/stdc++.h>
using namespace std;
int tsnt(int n, int k)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                k--;
                n/=i;
                if(k==0)
                    return i;
            }
        }
    }
    if(n>1)
    {
        k--;
    }
    if(k==0)
        return n;
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<tsnt(n,k);
}

