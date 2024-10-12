#include<bits/stdc++.h>
using namespace std;
int ptnt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int dem1=0;
            while(n%i==0)
            {
                dem1++;
                n/=i;
            }
            if(dem1<2)
                return false;
        }
    }
    if(n>1)
        return false;
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(ptnt(i))
            cout<<i<<" ";
    }
}

