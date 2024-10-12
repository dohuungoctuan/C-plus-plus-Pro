#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>se;
    while(n--)
    {
        int x;
        cin>>x;
        se.insert(x);
    }
    int q;
     cin>>q;
     while(q--)
     {
         int k;
         cin>>k;
         if(se.count(k)) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }

}

