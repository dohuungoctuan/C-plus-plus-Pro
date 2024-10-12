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
        v.push_back(x);
    }
    int a,b;
    cin>>a>>b;
    reverse(v.begin(), v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    reverse(v.begin()+a, v.begin()+b+1);
    for(auto x:v)
        cout<<x<<" ";
}

