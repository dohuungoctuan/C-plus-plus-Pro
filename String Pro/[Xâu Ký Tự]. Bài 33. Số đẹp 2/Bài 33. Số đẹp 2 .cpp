#include<bits/stdc++.h>
using namespace std;
string b="6";
bool check1(string a)
{
    if(a.find(b)!=string::npos)
        return 1;
    return 0;
}
bool check2(string a)
{
    string k=a;
    reverse(a.begin(),a.end());
    if(a==k)
        return 1;
    return 0;
}
int main()
{
    string a;
    cin>>a;
    if(check1(a)==true && check2(a)==true)
        cout<<"YES";
    else cout<<"NO";
}

