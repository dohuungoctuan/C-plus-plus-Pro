#include<bits/stdc++.h>
using namespace std;
map<string,int>k;
bool cmp(string a, string b)
{
    return k[a]<k[b];
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string w;
    set<string>se;
    vector<string>v;
    map<string,int>mp;
    int dem=1;
    while(ss>>w)
    {
        if(mp[w]==0)
        {
            v.push_back(w);
        }
        mp[w]++;
        if(k.find(w)==k.end())
        {
            k[w]=dem;
            dem++;
        }
    }
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" "<<mp[x]<<endl;
    cout<<endl;
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
        cout<<x<<" "<<mp[x]<<endl;

}

