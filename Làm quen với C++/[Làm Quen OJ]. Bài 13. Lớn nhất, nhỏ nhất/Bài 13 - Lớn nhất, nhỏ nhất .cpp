#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a,b)<<endl;
    cout<<min(c,d)<<endl;
    cout<<max({a,b,c})<<endl;
    cout<<min({a,b,c,d})<<endl;
}

