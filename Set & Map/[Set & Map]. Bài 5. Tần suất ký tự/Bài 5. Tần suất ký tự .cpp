#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char, int>mp;
    while(n--)
    {
        char x;
        cin>>x;
        mp[x]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
        break;
    }
    cout<<endl;
    std::map<char,int>::reverse_iterator it;
    for(it=mp.rbegin();it!=mp.rend();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
        break;
    }
    cout<<endl;
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
    std::map<char,int>::reverse_iterator rit;
  for (rit=mp.rbegin(); rit!=mp.rend(); ++rit)
    std::cout << rit->first << " " << rit->second << '\n';
}

