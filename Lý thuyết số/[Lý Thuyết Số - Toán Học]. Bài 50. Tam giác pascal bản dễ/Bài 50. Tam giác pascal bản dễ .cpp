#include<bits/stdc++.h>
using namespace std;
int tohop(int k, int n)
{
    long long res=1;
    for(int i=1;i<=n;i++)
        res*=i;
    long long res1=1;
    for(int i=1;i<=k;i++)
        res1*=i;
    int tmp=n-k;
    long long res2=1;
    for(int i=1;i<=tmp;i++)
        res2*=i;
    return res/(res1*res2);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<tohop(j,i)<<" ";
        }
        cout<<endl;
    }
}

