#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    int n;
    cin>>n;
    long long sum=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=i;j++)
        {
            sum*=j%MOD;
            sum%=MOD;
        }
            cout<<sum<<endl;
    }

}

