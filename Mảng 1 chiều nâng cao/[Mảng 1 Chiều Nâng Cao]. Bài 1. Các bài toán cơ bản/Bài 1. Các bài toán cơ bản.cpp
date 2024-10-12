#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
bool nto(int n)
{
    if(n < 2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
long long solve(vector<int>v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    long long max_val = max({
                            1ll * v[0] * v[1],
                            1ll * v[n - 1] * v[n - 2]
                            });
    return max_val;
}
bool doix(vector<int>v)
{
    int l = 0;
    int r = v.size() - 1;
    while(l <= r)
    {
        if(v[l] != v[r])
            return false;
        l++; r--;
    }
    return true;
}
int main()
{
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++)
    {
        int value; cin>>value;
        v.push_back(value);
    }
    int maxValue = INT_MIN;
    int maxIndex = -1;
    for(int i=0;i<size;i++)
    {
        if(v[i] >= maxValue)
        {
            maxValue = v[i];
            maxIndex = i;
        }
    }
    cout<<maxValue<<" "<<maxIndex<<endl;
    int minValue = INT_MAX;
    int minIndex = -1;
    for(int i=0;i<size;i++)
    {
        if(v[i] <= minValue)
        {
            minValue = v[i];
            minIndex = i;
        }
    }
    cout<<minValue<<" "<<minIndex<<endl;
    int cnt = 0;
    for(auto x : v)
    {
        if(nto(x))
            cnt++;
    }
    cout<<cnt<<endl;
    long long res = solve(v);
    cout<<res<<endl;
    if(doix(v))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    long long ans = 1;
    for(int i=0;i<v.size();i++)
    {
        ans = (ans % mod) * (v[i] % mod);
        ans %= mod;
    }
    cout<<ans;
}
