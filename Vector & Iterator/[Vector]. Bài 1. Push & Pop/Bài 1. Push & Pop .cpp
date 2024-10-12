#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        else
        {
           if(!v.empty())
                v.pop_back();
        }
    }
    if(v.empty())
        cout<<"EMPTY";
    else
    {
        for(auto x:v)
            cout<<x<<" ";
    }
}

