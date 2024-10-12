#include<bits/stdc++.h>
using namespace std;
int nto[1000001];
int n = 1000000;
int prefix[1000001];
void sang()
{
    for(int i=0;i<=n;i++)
        nto[i] = 1;
    nto[0] = nto[1] = 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(nto[i])
        {
            for(int j=i*i;j<=n;j+=i)
                nto[j] = 0;
        }
    }
}
int main()
{
    sang();
    int q;
    cin>>q;
    for(int i=1;i<=n;i++)
    {
        if(nto[i])
            prefix[i] = prefix[i-1] + 1;
        else
            prefix[i] = prefix[i-1];
    }
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        if(x==0)
            cout<<prefix[y]<<endl;
        else
            cout<<prefix[y] - prefix[x-1]<<endl;
    }
}
