#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int, int>mp;
    int a[n];
    vector<int>v;
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
    for(auto x:v)
        cout<<x<<" "<<mp[x]<<endl;

}

