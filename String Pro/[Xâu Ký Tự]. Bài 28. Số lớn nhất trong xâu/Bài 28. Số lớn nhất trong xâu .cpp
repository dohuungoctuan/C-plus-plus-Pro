#include<bits/stdc++.h>
using namespace std;
string max_val(string a, string b)
{
    if(a.size()>b.size()) return a;
    if(a.size()<b.size()) return b;
    else return max(a,b);
}
int main()
{
    string a;
    cin>>a;
    for(char &x:a)
    {
        if(isalpha(x))
            x=' ';
    }
    stringstream ss(a);
    string w;
    string res="0";
    while(ss>>w)
    {
        while(w.size()>1 && w[0]=='0')
        {
            w.erase(0,1);
        }
        res=max_val(res,w);
    }
    cout<<res;
}

