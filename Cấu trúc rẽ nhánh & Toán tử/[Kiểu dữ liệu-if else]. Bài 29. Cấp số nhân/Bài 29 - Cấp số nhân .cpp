#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int res = b / a;
    if(b*res==c && c*res==d)
        cout<<"YES";
    else cout<<"NO";
}

