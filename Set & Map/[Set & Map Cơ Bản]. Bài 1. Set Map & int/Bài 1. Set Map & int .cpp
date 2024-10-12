#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>se;
    while(n--)
    {
        int x;
        cin>>x;
        se.insert(x);
    }
    cout<<se.size()<<endl;
    for(auto x:se)
        cout<<x<<" ";
}


