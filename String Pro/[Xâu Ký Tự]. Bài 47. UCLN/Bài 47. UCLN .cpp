#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,x,y;
    cin>>a>>x>>y;
    long long tmp=__gcd(x,y);
    for(int i=0;i<tmp;i++)
        cout<<a;
}

