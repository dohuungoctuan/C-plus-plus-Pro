#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    priority_queue<ll, vector<ll>, greater<ll> >q;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size()>1)
    {
        ll x = q.top(); q.pop();
        ll y = q.top(); q.pop();
        ans += x + y;
        q.push(x + y);
    }
    cout<<ans;
}
