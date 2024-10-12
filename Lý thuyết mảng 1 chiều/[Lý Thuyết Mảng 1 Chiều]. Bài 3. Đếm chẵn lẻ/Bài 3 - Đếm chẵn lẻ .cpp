#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int dem1=0;
    int dem2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            dem1++;
        else dem2++;
    }
    cout<<dem1<<" "<<dem2;

}

