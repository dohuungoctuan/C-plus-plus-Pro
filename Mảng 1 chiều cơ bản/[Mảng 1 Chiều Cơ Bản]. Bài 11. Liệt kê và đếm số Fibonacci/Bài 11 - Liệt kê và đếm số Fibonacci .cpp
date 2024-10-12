#include<bits/stdc++.h>
using namespace std;
bool fibo(int n)
{
    if(n==1 || n==0)
        return true;
    int f1=0;
    int f2=1;
    int fn;
    for(int i=2;i<=92;i++)
    {
        fn=f1+f2;
        if(n==fn)
           {
               return true;
           }
        f1=f2;
        f2=fn;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(fibo(a[i]))
        {
           cout<<a[i]<<" ";
           check=false;
        }
    }
    if(check=false)
        cout<<"NONE";
}

