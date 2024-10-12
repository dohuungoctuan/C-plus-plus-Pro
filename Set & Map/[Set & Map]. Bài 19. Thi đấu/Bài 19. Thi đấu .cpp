#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    map<string,vector<string>>mp;
    for(int i=0;i<n;i++)
    {
        string a;
        getline(cin,a);
        size_t k = a.find(" - ");
        string x = a.substr(0,k);
        string y = a.substr(k+3);
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    for(auto &x:mp)
    {
        sort(x.second.begin(),x.second.end());
    }
    for(auto x:mp)
    {
        cout<<x.first<<" : ";
        vector<string>tmp=x.second;
        for(int i=0;i<tmp.size();i++)
        {
            cout<<tmp[i];
            if(i!=tmp.size()-1)
                cout<<", ";
        }
        cout<<endl;
    }
}

