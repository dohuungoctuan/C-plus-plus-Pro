#include<bits/stdc++.h>
using namespace std;
int checkdxc(int a[], int n, int i)
{
    if(i==n-1)
    {
        if(a[i]==a[n])
            return 1;
        else return 0;
    }
    if(a[i]!=a[n])
        return 0;
    else return checkdxc(a,n-1,i+1);
}
int checkdxl(int a[], int n, int i)
{
    if(i==n)
        return 1;
    if(a[i]!=a[n])
        return 0;
    else return checkdxl(a,n-1,i+1);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int i=1;
    if(n%2==0)
    {
        if(checkdxc(a,n,i)==1)
            cout<<"YES";
        else cout<<"NO";
    }
    else
    {
        if(checkdxl(a,n,i)==1)
            cout<<"YES";
        else cout<<"NO";
    }
}

