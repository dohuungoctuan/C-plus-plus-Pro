#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}
int main()
{
    string a;
    getline(cin,a);
    vector<string>v;
    stringstream ss(a);
    string w;
    while(ss>>w)
        v.push_back(w);
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
        cout<<x<<" ";
}

