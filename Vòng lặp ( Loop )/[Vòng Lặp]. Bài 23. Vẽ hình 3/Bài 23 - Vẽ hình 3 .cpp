#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tmp=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j+tmp<<" ";
        }
        cout<<endl;
        tmp+=n;
    }
    cout<<endl;
    int tmp1=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j+tmp1<<" ";
        }
        cout<<endl;
        tmp1+=1;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>n-i)
                cout<<i;
            else cout<<"~";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        int tmp=i;
        for(int j=1;j<=i;j++)
        {
            cout<<tmp<<" ";
            tmp=tmp+n-j;
        }
        cout<<endl;
    }
}

