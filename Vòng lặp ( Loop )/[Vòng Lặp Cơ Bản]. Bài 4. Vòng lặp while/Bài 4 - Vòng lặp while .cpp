#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=3;i<=n;i+=3)
        cout<<i<<" ";
    cout<<endl;
    for(int i=0;i<n;i+=15)
        cout<<i<<" ";
    cout<<endl;
    for(int i=n;i<=7+n;i++)
    {
        if(i%7==0)
            cout<<i<<" ";
    }
    cout<<endl;
    for(int i=n;i>=0;i--)
    {
        if(i%9==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    for(int i=1;i<=2*n-1;i+=2)
        cout<<i<<" ";
}

