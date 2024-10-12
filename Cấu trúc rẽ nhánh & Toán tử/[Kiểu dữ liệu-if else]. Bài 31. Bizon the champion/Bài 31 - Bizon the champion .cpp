#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,n;
    cin>>a>>b>>c>>d>>e>>f>>n;
    int res=a+b+c;
    int tmp=d+e+f;
    int sum=0;
    if(res%5==0)
        sum+=res/5;
    else sum+=res/5+1;
    if(tmp%10==0)
        sum+=tmp/10;
    else sum+=tmp/10+1;
    if(sum<=n)
        cout<<"YES";
    else cout<<"NO";
}

