#include<bits/stdc++.h>
using namespace std;
long long fibo[93];
void fibonacci()
{
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=92;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
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
    fibonacci();
    int n;
    cin>>n;
    while(n--)
    {
        long long x;
        cin>>x;
        if(check(x))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

