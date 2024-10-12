    #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    set<ll>se;
    long long res=m+n;
    while(res--)
    {
        int x;
        cin>>x;
        se.insert(x);
    }
    for(auto it=se.rbegin(); it!=se.rend();it++)
        cout<<(*it)<<" ";
}

