#include<bits/stdc++.h>
using namespace std;
int nto[10000001];
int k=10000000;
void sang()
{
    for(int i=0;i<k;i++)
        nto[i]=1;
    nto[0]=nto[1]=0;
    for(int i=2;i<=sqrt(k);i++)
    {
        if(nto[i])
        {
            for(int j=i*i;j<=k;j+=i)
                nto[j]=0;
        }

    }
}
int main()
{
    sang();
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(nto[i])
            cout<<i<<" ";
    }

}

