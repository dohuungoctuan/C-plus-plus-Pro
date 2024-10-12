#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mp[a[i][j]]==i)
                mp[a[i][j]]++;
        }
    }
    bool check=false;
    for(auto x:mp)
    {
        if(x.second==n)
        {
            cout<<x.first<<" ";
            check=true;
        }
    }
    if(check==false)
        cout<<"NOT FOUND";

}

