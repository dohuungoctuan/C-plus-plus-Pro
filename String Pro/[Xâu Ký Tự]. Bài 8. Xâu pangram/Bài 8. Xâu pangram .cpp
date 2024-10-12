#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    set<char>se;
    for(int i=0;i<a.size();i++)
    {
        if(isupper(a[i]))
            a[i]=tolower(a[i]);
        se.insert(a[i]);
    }
    if(se.size()!=26)
        cout<<"NO";
    else cout<<"YES";
}

