#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int i=1;
    while(i<=n)
    {
        if(a[i]!=a[n-i+1])
        {
            cout<<"NO";
            return 0;
        }
        i++;
    }
    cout<<"YES";
}

