#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long tich=1;
    long long c=min(a,b);
    for(int i=1;i<=c;i++)
        tich*=1ll*i;
    cout<<tich;

}

