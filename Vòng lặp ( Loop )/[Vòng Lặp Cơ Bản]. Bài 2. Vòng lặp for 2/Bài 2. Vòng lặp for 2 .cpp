#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i+=3)
        cout<<i<<" ";
    cout<<endl;
    int res=0;
    int i=0;
    while(res<=n)
    {
        res=pow(2,i);
        if(res<=n)
            cout<<res<<" ";
        i++;
    }
    cout<<endl;
    for(int j=n;j<=n+17;j++)
    {
        if(j%17==0)
        {
            cout<<j<<endl;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i%7==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    int tmp=1;
    int k=1;
    while(tmp<=n)
    {
        if(tmp<=n)
            cout<<tmp<<" ";
        tmp+=k;
        k++;
    }
}

