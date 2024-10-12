#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    int tmp1=abs(a.first-a.second);
    int tmp2=abs(b.first-b.second);
    if(tmp1!=tmp2)
        return tmp1<tmp2;
    else if(a.first!=b.first)
        return a.first<b.first;
    else return a.second>b.second;
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
        cout<<x.first<<" "<<x.second<<endl;
    }

}

