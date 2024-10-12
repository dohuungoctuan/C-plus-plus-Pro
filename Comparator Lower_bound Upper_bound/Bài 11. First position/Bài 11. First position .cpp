#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    auto it=lower_bound(a,a+n,x);
    if(*it!=x)
        cout<<"-1";
    else cout<<(it-a);

}

