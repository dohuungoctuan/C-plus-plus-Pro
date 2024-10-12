#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long n;
    cin>>n;
    set<ll>se;
    while(n--)
    {
        long long x;
        cin>>x;
        se.insert(x);
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        if(x==1)
        {
            ll y;
            cin>>y;
            se.insert(y);
        }
        else if(x==2)
        {
            ll y;
            cin>>y;
            if(se.count(y))
            {
                auto it=se.find(y);
                se.erase(it);
            }
        }
        else if(x==3)
        {
            cout<<*se.begin()<<endl;
        }
        else
        {
            cout<<*se.rbegin()<<endl;
        }
    }
}

