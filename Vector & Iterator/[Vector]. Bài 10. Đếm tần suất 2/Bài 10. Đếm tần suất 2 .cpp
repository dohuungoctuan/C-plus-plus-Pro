#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char, int>mp;
    char a[n];
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        bool check=false;
        for(int j=0;j<v.size();j++)
        {
            if(a[i]==v[j])
                {
                    check=true;
                }
        }
        if(check==false)
            v.push_back(a[i]);
        mp[a[i]]++;
    }
    cout<<v.size()<<endl;
    for(auto x:v)
        cout<<x<<" "<<mp[x]<<endl;

}

