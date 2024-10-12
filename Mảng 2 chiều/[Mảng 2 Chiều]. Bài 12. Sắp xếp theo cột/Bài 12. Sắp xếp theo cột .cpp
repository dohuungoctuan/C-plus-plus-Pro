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
    int b[n][n];
    int l=0, k=0;
    for(int i=0;i<n;i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
            v.push_back(a[j][i]);
        sort(v.begin(),v.end());
        for(auto x:v)
            b[l][k++]=x;
        l++; k=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<b[j][i]<<" ";
        cout<<endl;
    }
}

