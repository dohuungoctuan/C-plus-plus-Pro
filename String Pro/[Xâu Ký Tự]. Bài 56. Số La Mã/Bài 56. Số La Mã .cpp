#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<char,int>mp={
    {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},
    {'D',500},{'M',1000}};
    while(n--)
    {
        string a;
        cin>>a;
        long long res=0;
        for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]]>mp[a[i-1]])
                res-=2*mp[a[i-1]];
            res+=mp[a[i]];
        }
        cout<<res<<endl;
    }
}

