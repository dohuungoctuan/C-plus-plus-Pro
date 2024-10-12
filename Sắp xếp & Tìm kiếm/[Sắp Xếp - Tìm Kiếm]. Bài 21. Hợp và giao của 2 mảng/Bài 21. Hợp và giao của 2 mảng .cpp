#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int>giao;
    vector<int>hop;
    sort(a,a+n);
    sort(b,b+m);
    int i=0, j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            giao.push_back(a[i]);
            hop.push_back(b[j]);
            i++; j++;
        }
        else if(a[i]<b[j])
        {
            hop.push_back(a[i]);
            i++;
        }
        else
        {
            hop.push_back(b[j]);
            j++;
        }
    }
    while(i<n)
    {
        hop.push_back(a[i]);
        i++;
    }
    while(j<m)
    {
        hop.push_back(b[j]);
        j++;
    }
    for(auto x:giao)
        cout<<x<<" ";
    cout<<endl;
    for(auto x:hop)
        cout<<x<<" ";
}

