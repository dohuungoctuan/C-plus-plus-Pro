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
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(int i=b;i>=a;i--)
        cout<<v[i]<<" ";
}

