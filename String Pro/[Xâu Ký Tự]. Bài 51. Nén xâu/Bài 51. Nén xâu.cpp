#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string res="";
    string k="";
    k+=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==a[i-1])
            k+=a[i];
        else
        {
            res+=k[0];
            res+=to_string(k.size());
            k="";
            k+=a[i];
        }
    }
    res+=k[0];
    res+=to_string(k.size());
    cout<<res;

}

