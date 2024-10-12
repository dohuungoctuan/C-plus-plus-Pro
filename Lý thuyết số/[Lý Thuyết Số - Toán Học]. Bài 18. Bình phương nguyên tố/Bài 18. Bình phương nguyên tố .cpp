#include<bits/stdc++.h>
using namespace std;
int ptnt(int n)
{
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
            if(dem>=2)
                return true;
        }
    }
    return false;
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

