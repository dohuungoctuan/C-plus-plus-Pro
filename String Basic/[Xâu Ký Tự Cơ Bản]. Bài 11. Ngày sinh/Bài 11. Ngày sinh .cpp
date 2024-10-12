#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a.size()==10)
    {
        cout<<a;
        return 0;
    }
    string ng,th,nam;
    stringstream ss(a);
    getline(ss, ng, '/');
    getline(ss, th, '/');
    getline(ss, nam, '/');
    if(ng.size()==1)
        ng="0"+ng;
    if(th.size()==1)
        th="0"+th;
    cout<<ng<<"/"<<th<<"/"<<nam;
}

