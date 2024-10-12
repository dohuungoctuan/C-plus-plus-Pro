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
    long long ans=0;
    long long res=0;
    long long dem=1;
    if(n==1)
    {
        cout<<a[0]<<" "<<"1";
        return 0;
    }
    for(int i=1;i<n;i++)
    {
         if(a[i]==a[i-1])
            dem++;
         else
         {
             if(dem>ans)
                {
                    ans=dem;
                    res=a[i-1];
                }
             dem=1;
         }
    }
    if(ans==0)
        cout<<a[0]<<" "<<dem;
    else if(dem>ans)
    {
        cout<<a[n-1]<<" "<<dem;
    }
    else
        cout<<res<<" "<<ans;
}

