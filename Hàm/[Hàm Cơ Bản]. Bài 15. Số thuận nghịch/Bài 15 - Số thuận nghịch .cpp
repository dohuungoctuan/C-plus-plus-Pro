#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    int sum=0;
    int res=n;
    while(n)
    {
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==res)
        return true;
    else return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(kt(i))
            cout<<i<<" ";
    }
}

