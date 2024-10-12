#include<bits/stdc++.h>
using namespace std;
bool rever(string a)
{
    string b=a;
    reverse(a.begin(),a.end());
    if(a==b)
        return true;
    else return false;
}
bool cmp(string a, string b)
{
    if(a.size()!=b.size())
        return a.size()<b.size();
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string w;
    set<string>se;
    vector<string>v;
    while(ss>>w)
    {
        if(rever(w))
        {
            if(!se.count(w))
                v.push_back(w);
            se.insert(w);
        }
    }
    stable_sort(v.begin(),v.end(),cmp);
    for(auto x:v)
        cout<<x<<" ";
}

