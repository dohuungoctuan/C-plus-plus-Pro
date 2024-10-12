#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x;
    cin>>a>>b>>x;
    if(x%2==0)
        cout<<x/2*a-x/2*b;
    else cout<<(x/2+1)*a-(x/2)*b;
}

