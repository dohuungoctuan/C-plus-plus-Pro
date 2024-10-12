#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    map<string,string>mp;
    for(int i=0;i<n;i++)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
        mp[b]=a;
    }
    int q; cin>>q;
    while(q--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        if(mp.find(a)==mp.end())
            a="Unknown wallet";
        else a=mp[a];
        if(mp.find(b)==mp.end())
            b="Unknown wallet";
        else b=mp[b];
        cout<<a<<" send "<<c<<" bitcoin to "<<b<<endl;
    }
}

