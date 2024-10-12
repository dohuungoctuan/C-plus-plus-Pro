#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    long long res=0;
    for(int i=0;i<n.size();i++)
    {
        res=(res*10+(n[i]-'0'))%4;
    }
    if(res==1) cout<<8;
    else if(res==0) cout<<6;
    else if(res==2) cout<<4;
    else if(res==3) cout<<2;
}

