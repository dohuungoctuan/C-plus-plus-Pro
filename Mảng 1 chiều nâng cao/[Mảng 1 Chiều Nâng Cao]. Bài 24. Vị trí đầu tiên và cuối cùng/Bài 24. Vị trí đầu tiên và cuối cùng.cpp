#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int x; cin>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=-1, r=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            l = i + 1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==x)
        {
            r = i + 1;
            break;
        }
    }
    cout<<l<<" "<<r;

}
