#include<bits/stdc++.h>
using namespace std;
long long cnt[1001];
int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        vector<int>tmp;
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        x--; y--;
        cout<<v[x][y]<<endl;
    }
}

