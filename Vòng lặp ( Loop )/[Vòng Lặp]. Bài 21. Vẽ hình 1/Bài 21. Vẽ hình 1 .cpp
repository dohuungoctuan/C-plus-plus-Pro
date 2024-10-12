#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n)
                cout<<"*";
            else if(i>=2 && i<=n && (j==1 || j==n))
                cout<<"*";
            else if((i>=2 && i<=n) && (j>=2 && j<=n))
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n)
                cout<<"*";
            else if((i>=2 && i<=n) && (j==1 || j==n))
                cout<<"*";
            else if((i>=2 && i<=n) && (j>=2 && j<=n))
                cout<<"#";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1)
                cout<<"1 ";
            else if(i==n)
                cout<<n<<" ";
            else if((i>=2 && i<n) && (j==1 || j==n))
                cout<<i<<" ";
            else if((i>=2 && i<n) && (j>=2 && j<n))
                cout<<"  ";
        }
        cout<<endl;
    }
}

