#include<bits/stdc++.h>
using namespace std;
bool thng(int n)
{
    int k=n;
    int tmp=0;
    while(n!=0)
    {
        tmp=tmp*10+n%10;
        n/=10;
    }
    if(tmp==k)
        return true;
    return false;
}
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"Pattern 1:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Pattern 2:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Pattern 3:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Pattern 4:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

