#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    set<char>se;
    set<char>se1;
    for(int i=0;i<a.size();i++)
        se.insert(a[i]);
    for(int i=0;i<b.size();i++)
    {
        if(se.count(b[i]))
            se1.insert(b[i]);
    }
    for(auto x:b)
        se.insert(x);
    for(auto x:se1)
        cout<<x;
    cout<<endl;
    for(auto x:se)
        cout<<x;
}

