#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        int res=a[i]-a[i-1];
        if(res<ans)
            ans=res;
    }
    cout<<ans;
}

