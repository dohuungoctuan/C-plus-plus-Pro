#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum1=1e6;
    int sum2=-1;
    int res1, res2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=sum1)
        {
            sum1=a[i];
            res1=i;
        }
        if(a[i]>sum2)
        {
            sum2=a[i];
            res2=i;
        }
    }
    cout<<res1<<" "<<res2;
}

