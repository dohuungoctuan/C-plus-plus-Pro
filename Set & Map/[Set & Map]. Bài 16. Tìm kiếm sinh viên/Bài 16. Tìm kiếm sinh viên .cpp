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
        mp.insert({a,b});
    }
    int q; cin>>q;
    while(q--)
    {
        string a;
        cin>>a;
        if(mp.find(a)==mp.end())
            cout<<"NOT FOUND"<<endl;
        else cout<<mp[a]<<endl;
    }
}

