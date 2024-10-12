#include<bits/stdc++.h>
using namespace std;
int nto[10000001];
int k=10000001;
long long fibo[93];
void sang()
{
    for(int i=0;i<k;i++)
        nto[i]=1;
    nto[0]=nto[1]=0;
    for(int i=2;i<=sqrt(k);i++)
    {
        if(nto[i])
        {
            for(int j=i*i;j<k;j+=i)
            {
                if(nto[j])
                    nto[j]=0;
            }
        }
    }
}
void fibonacci()
{
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=92;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}
int tongcs(long long n)
{
    int res=0;
    while(n)
    {
        int tmp=n%10;
        res+=tmp;
        n/=10;
    }
    return res;
}
bool check(long long n)
{
    for(int i=0;i<92;i++)
    {
        if(fibo[i]==n)
            return true;
    }
    return false;
}
int main()
{
    sang();
    fibonacci();
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(nto[i]==1 && check(tongcs(i))==true)
            cout<<i<<" ";
    }
}

