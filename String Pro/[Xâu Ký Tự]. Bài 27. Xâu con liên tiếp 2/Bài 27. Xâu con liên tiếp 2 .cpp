#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    a+=a[a.size()-1];
    string res="";
    string k="";
    k+=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]!=a[i-1])
            k+=a[i];
        else{
            if(k.size()>res.size())
                res=k;
            else if(k.size()==res.size() && k>res)
                res=k;
            k="";
            k+=a[i];
        }
    }
    cout<<res;
}

