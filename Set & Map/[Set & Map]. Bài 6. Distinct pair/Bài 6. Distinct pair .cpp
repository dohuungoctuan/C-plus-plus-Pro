#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<pair<int, int>>se;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        pair<int, int >pairs = make_pair(x,y);
        se.insert(pairs);
    }
    cout<<se.size();
}

