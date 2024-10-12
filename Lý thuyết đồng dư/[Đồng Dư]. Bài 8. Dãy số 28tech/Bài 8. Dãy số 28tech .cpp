#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    int n;
    cin>>n;
    long long f1=2;
    long long f2=8;
    long long fn;
    vector<int>v;
    v.push_back(2);
    v.push_back(8);
    for(int i=2;i<=1000000;i++)
    {
        fn=((2*(f2%MOD))%MOD+(8*(f1%MOD))%MOD)%MOD;
        f1=f2;
        f2=fn;
        v.push_back(f2);
    }
    while(n--)
    {
        int x;
        cin>>x;
        cout<<v[x-1]<<endl;
    }
}

