#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>se;
    while(n--)
    {
        string a;
        cin>>a;
        se.insert(a);
    }
    cout<<se.size()<<endl;
    for(auto x:se)
        cout<<x<<" ";
}

