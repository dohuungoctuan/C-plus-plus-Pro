#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    map<int,int>index;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        index[a[i]] = i;
    }
    int maxDis = -1;
    for(int i=0;i<n;i++)
    {
        int x = a[i] + k;
        int y = a[i] - k;
        if(index.count(x))
        {
            int dis = abs(i - index[x]);
            maxDis = max(maxDis, dis);
        }
        if(index.count(y))
        {
            int dis = abs(i - index[y]);
            maxDis = max(maxDis, dis);
        }
    }
    cout<<maxDis<<endl;
}

