#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int tmp=a.size();
    vector<char>res;
    for(int i=0;i<tmp;i++)
    {
        if(a[i]!='2' && a[i]!='8' && a[i]!='t' && a[i]!='e' && a[i]!='c' && a[i]!='h')
            res.push_back(a[i]);
    }
    if(res.size()==0)
        cout<<"EMPTY";
    else
    {
        for(auto x:res)
            cout<<x;
    }
}

