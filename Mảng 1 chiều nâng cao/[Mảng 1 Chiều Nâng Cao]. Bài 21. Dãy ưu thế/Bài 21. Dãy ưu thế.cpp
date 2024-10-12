#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int odd = 0, even = 0;
    int cnt = 0;
    while(cin >> x)
    {
        if(x % 2 == 0)
            even++;
        else if(x % 2 == 1)
            odd++;
        cnt++;
    }
    if(cnt % 2 == 0 && even > odd) cout<<"YES";
    else if(cnt % 2 != 0 && even < odd) cout<<"YES";
    else cout<<"NO";
}
