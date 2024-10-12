#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string res="";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='6') res+="35";
        else if(a[i]=='4') res+="223";
        else if(a[i]=='8') res+="2227";
        else if(a[i]=='9') res+="2337";
        else if(a[i]!='0' && a[i]!='1')
            res+=a[i];
    }
    sort(res.begin(),res.end(),greater<char>());
    cout<<res;
}

