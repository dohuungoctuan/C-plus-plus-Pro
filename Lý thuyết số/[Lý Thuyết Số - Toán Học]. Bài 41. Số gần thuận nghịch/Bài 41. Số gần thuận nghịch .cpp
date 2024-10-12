#include<bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    int res=n%10;
    n/=10;
    int dem=0;
    long long tmp=0;
    long long ans=n;
    while(n!=0)
    {
        dem++;
        tmp=tmp*10+n%10;
        n/=10;
    }
    dem--;
    int res1=tmp%10;
    tmp/=10;
    ans=ans%(long long)pow(10,dem);
    if((res*2==res1 || res1*2==res) && (ans==tmp))
        return true;
    else return false;
}
int main()
{
    long long n;
    cin>>n;
    if(check(n))
        cout<<"YES";
    else cout<<"NO";
}

