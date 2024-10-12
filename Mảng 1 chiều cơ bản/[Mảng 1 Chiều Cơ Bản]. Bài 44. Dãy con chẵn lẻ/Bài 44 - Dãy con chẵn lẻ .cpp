#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int dem=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int chan=0; int le=0;
        for(int j=i;j<n;j++)
        {
            if(a[j]%2==0)
                chan++;
            else le++;
            if(chan==le)
                dem++;
        }
    }
    cout<<dem;
}

