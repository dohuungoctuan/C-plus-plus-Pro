#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int>se;
    int max_val=INT_MIN;
    int min_val=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        se.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        min_val=min(min_val,a[i]);
        max_val=max(max_val,a[i]);
    }
    int tmp=max_val-min_val+1;
    cout<<tmp-se.size();
}

