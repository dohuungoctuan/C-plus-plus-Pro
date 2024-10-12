#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
bool check(string a)
{
    long long sum=0;
    for(auto x:a)
    {
        int tmp=(int)x - 48;
        if(!nto(tmp))
            return 0;
        sum+=tmp;
    }
    if(nto(sum))
        return 1;
    return 0;
}
int main()
{
    string a;
    cin>>a;
    if(check(a))
        cout<<"YES";
    else cout<<"NO";
}

