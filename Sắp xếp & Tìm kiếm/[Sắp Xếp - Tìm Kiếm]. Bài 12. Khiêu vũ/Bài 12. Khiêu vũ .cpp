#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int j=0;j<m;j++)
        cin>>b[j];
    sort(b,b+m);
    int dem=0;
    int i=0, j=0;
    while(i<n && j<m)
    {
        if(a[i]>b[j])
        {
            dem++;
            i++; j++;
        }
        else
        {
            i++;
        }
    }
    cout<<dem;
}

