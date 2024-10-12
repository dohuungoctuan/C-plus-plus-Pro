#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int min_val=1e6;
    int max_val=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        min_val=min(a[i],min_val);
        max_val=max(a[i],max_val);
    }
    cout<<min_val<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]==min_val)
            cout<<i<<" ";
    }
    cout<<endl;
    cout<<max_val<<endl;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==max_val)
            cout<<i<<" ";
    }

}

