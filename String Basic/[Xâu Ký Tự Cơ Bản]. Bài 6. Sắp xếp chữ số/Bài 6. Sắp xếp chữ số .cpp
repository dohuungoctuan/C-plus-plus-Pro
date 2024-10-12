#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    multiset<int>se;
    for(int i=0;i<a.size();i++)
    {
        int res=(int)a[i]-48;
        if(res!=0)
            se.insert(res);
    }
    if(se.size()==0)
        cout<<"0";
    for(auto x:se)
        cout<<x;
}

