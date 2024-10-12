#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int x;
    cin>>a>>x;
    string b="28tech";
    for(int i=0;i<x;i++)
        cout<<a[i];
    for(int i=0;i<b.size();i++)
        cout<<b[i];
    for(int i=x;i<a.size();i++)
        cout<<a[i];
}

