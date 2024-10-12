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
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        auto it1=lower_bound(a,a+n,x);
        auto it2=upper_bound(a,a+n,y)-1;
        cout<<(it2-a)-(it1-a)+1<<endl;
    }
}

