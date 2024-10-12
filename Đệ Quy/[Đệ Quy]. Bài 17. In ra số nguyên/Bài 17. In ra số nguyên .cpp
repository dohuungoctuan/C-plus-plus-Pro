#include<bits/stdc++.h>
using namespace std;
void trph(long long n)
{
    if(n<10)
        cout<<n<<" ";
    else
    {
        trph(n/10);
        cout<<n%10<<" ";
    }
}
void phtr(long long n)
{
    if(n<10)
        cout<<n<<" ";
    else{
        cout<<n%10<<" ";
        phtr(n/10);
    }
}
int main()
{
    long long n;
    cin>>n;
    trph(n);
    cout<<endl;
    phtr(n);
}

