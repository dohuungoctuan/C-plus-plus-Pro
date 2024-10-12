#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
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
    if(sum==0)
        return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(kt(i))
            cout<<i<<" ";
    }
}

