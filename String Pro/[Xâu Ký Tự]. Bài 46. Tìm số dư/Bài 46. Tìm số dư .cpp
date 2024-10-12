#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int res=0;
    for(int i=0;i<n.size();i++)
    {
        res=(res*10+(n[i]-'0'))%4;
    }
    if(res==0) cout<<4;
    else if(res==1 || res==2 || res==3) cout<<0;
}

