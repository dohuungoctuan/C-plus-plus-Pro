#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0 )
        cout<<"YES\n";
    else cout<<"NO";
}

