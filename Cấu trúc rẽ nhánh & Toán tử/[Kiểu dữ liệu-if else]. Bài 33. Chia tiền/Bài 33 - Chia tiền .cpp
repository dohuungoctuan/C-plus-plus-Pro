#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if((a+b+c+n)%3!=0)
    {
        cout<<"NO";
        return 0;
    }
    if((a>b+c+n) || (b>a+c+n) || (c>a+b+n))
    {
        cout<<"NO";
        return 0;
    }
    int sum=(a+b+c+n)/3;
    if(sum<a || sum<b || sum<c)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}

