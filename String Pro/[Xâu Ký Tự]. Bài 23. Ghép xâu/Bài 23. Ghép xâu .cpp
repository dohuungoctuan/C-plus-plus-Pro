#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    return a+b>b+a;
}
int main()
{
    int n;
    cin>>n;
    vector<string>v;
    while(n--)
    {
        string a; cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),cmp);
    string res="";
    for(auto x:v)
        res+=x;
    cout<<res;
}

