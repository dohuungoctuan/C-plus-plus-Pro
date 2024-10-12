#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n/10!=0)
    {
        int res=0;
        while(n!=0)
        {
          res+=n%10;
          n=n/10;
        }
        n=res;
    }
    cout<<n;
}

