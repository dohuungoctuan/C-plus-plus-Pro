#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a, long long b)
{
    if(a%b==0)
        return b;
    if(b==0)
        return a;
    return UCLN(b,a%b);
}
long long LCM(long long a,long long b)
{
    return a/UCLN(a,b)*b;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<UCLN(a,b)<<" ";
    cout<<LCM(a,b);

}

