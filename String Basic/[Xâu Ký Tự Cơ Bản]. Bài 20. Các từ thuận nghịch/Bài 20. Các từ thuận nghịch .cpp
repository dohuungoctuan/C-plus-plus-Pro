#include<bits/stdc++.h>
using namespace std;
bool thuanng(string a)
{
    string b=a;
    reverse(a.begin(),a.end());
    if(a==b)
        return true;
    return false;

}
int main()
{
    string a;
    getline(cin,a);
    set<string>se;
    stringstream ss(a);
    string w;
    while(ss>>w)
    {
        if(thuanng(w))
            se.insert(w);
    }
    for(auto x:se)
        cout<<x<<" ";
}

