#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    double max_val = max(v[0], k - v[n-1]);
    for(int i=2;i<v.size();i++)
    {
        double tmp = (double)(v[i]-v[i-1])/2;
        if(tmp>max_val)
            max_val = tmp;
    }
    cout<<fixed<<setprecision(10)<<(double)max_val;
}

