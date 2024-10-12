#include<bits/stdc++.h>
using namespace std;
bool kt1(int n)
{
    while(n)
    {
        int res=n%10;
        if(res==6)
            return true;
        n/=10;
    }
    return false;
}
bool kt2(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum%2==0)
        return true;
    else return false;
}
bool kt3(int n)
{
    int sum=0;
    while(n)
    {
        int res=n%10;
        if(res%2==0)
            sum++;
        else sum--;
        n/=10;
    }
    if(sum<0)
        return true;
    else return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(kt1(i)&& kt2(i) && kt3(i))
            cout<<i<<" ";
    }
}

