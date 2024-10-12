#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<n;i++)
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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n-1;i++)
    {
        int sum1=0;
        int sum2=0;
        for(int j=0;j<i;j++)
            sum1+=a[j];
        for(int j=i+1;j<n;j++)
            sum2+=a[j];
        if(nto(sum1)==true && nto(sum2)==true)
            cout<<i<<" ";
    }
}

