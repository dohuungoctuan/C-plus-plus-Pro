#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int, int>>v;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(auto x:v)
        cout<<fixed<<setprecision(2)<<(double)sqrt(x.first*x.first + x.second*x.second)<<" ";
}

