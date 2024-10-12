#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    return a.first<b.first;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    pair<int,int>k=v[0];
    long long sum=0;
    sort(v.begin(),v.end(),cmp);
    int res=v.size();
    for(int i=0;i<res;i++)
    {
        pair<int,int>tmp=v[i];
        if(tmp.first>sum)
        {
            sum=tmp.first;
        }
        sum+=tmp.second;
    }
    cout<<sum;

}

