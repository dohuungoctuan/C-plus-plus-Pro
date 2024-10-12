#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        int dem=0;
        map<char,int>mp;
        for(auto x:a)
            mp[x]++;
        for(auto x:mp)
        {
            if(x.second%2==1)
                dem++;
        }
        if(dem>1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

