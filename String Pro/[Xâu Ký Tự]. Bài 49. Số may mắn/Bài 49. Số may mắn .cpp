#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string k="111";
    while(a.find(k)!=string::npos)
    {
        int tmp=a.find(k);
        a.erase(tmp,3);
    }
    string tmp="1";
    if(a.find(tmp)==string::npos)
        cout<<"EMPTY";
    else cout<<a;
}

