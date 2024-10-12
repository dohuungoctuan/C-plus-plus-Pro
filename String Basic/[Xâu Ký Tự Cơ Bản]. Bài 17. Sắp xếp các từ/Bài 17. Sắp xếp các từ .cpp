#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    vector<string>v;
    stringstream ss(a);
    string w;
    while(ss>>w)
        v.push_back(w);
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end(),greater<string>());
    for(auto x:v)
        cout<<x<<" ";
}

