#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int a,b;
            cin>>a>>b;
            v.insert(v.begin()+a, b);
        }
        else
        {
            int m;
            cin>>m;
            v.erase(v.begin()+m);
        }
    }
    for(auto x:v)
        cout<<x<<" ";
}

