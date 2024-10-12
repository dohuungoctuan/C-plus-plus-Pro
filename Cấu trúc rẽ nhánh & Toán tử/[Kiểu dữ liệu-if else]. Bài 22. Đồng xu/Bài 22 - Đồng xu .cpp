#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    int dem=0;
    while(b!=0)
    {
        dem+=b/a;
        b=b-b/a*a;
        a--;
    }
    cout<<dem;
}

