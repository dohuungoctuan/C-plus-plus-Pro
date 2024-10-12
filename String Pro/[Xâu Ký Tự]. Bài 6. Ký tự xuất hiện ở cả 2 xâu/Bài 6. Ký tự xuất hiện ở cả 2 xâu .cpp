#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    set<char>se;
    set<char>se1;
    for(auto x:a)
        se.insert(x);
    for(auto x:b)
        se1.insert(x);
    set<char>se2;
    set<char>se3;
    for(auto x:a)
    {
        if(!se1.count(x))
            se2.insert(x);
    }
    for(auto x:se2)
        cout<<x;
    cout<<endl;
    for(auto x:b)
    {
        if(!se.count(x))
            se3.insert(x);
    }
    for(auto x:se3)
        cout<<x;
}

