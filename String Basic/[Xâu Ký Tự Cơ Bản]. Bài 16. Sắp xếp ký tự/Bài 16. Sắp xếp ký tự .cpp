#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<char>v;
    for(auto x:a)
        v.push_back(x);
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x;
    cout<<endl;
    sort(v.begin(),v.end(),greater<char>());
    for(auto x:v)
        cout<<x;
}

