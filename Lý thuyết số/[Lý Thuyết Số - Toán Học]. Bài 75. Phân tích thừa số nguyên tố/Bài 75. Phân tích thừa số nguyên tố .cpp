#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    map<int, int>mp;
    vector<int>v;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            while(n%i==0)
                {
                    n/=i;
                    mp[i]++;
                    v.push_back(i);
                }
        }
    }
    if(n>1) {
            cout<<n<<" ";
            mp[n]++;
            v.push_back(n);
    }
    cout<<endl;
    for(auto x:mp)
    {
        cout<<"("<<x.first<<", "<<x.second<<")"<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<" x ";
    }
}

