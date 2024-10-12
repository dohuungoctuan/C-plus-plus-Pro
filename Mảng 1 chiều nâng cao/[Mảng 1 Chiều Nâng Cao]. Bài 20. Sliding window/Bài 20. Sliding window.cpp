#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int cnt = 0;
    int odd = 0, even = 0;
    while(cin >> x)
    {
        if(x % 2 == 0)
            even++;
        else odd++;
        cnt++;
    }
    if(cnt % 2 == 0 && even > odd)
        cout<<"YES"<<endl;
    else if(cnt % 2 == 1 && even < odd)
        cout<<"YES"<<endl;
    else cout<<"NO";
}
