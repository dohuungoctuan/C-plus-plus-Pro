#include<bits/stdc++.h>
using namespace std;
int khc(int x,int y)
{
    int res=x*x+y*y;
    return res;
}
bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(khc(a.first,a.second)!=khc(b.first,b.second))
        return khc(a.first,a.second)<khc(b.first,b.second);
    else if(khc(a.first,a.second)==khc(b.first,b.second))
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else return a.second<b.second;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        pair<int,int>tmp=x;
        cout<<tmp.first<<" "<<tmp.second<<endl;
    }

}

