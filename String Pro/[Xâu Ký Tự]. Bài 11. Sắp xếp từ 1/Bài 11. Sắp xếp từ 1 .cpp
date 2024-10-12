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
    string s;
    getline(cin,s);
    stringstream ss(s);
    string w;
    vector<string>v;
    while(ss>>w)
    {
        v.push_back(w);
    }
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
        cout<<x<<" ";

}

