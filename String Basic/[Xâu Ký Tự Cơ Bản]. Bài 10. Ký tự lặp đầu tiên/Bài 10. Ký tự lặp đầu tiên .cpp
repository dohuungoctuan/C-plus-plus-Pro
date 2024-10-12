#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    map<char,int>mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==2)
        {
            cout<<a[i];
            return 0;
        }
    }
    cout<<"NONE";
}

