#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long res=1;
    if(n==0)
    {
        cout<<res;
        return 0;
    }
    for(int i=1;i<=n;i++)
        res*=i;
    cout<<res;
}

