#include<bits/stdc++.h>
using namespace std;
int tongcs(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
bool cmp(int x, int y)
{
    if(tongcs(x)!=tongcs(y))
        return tongcs(x)<tongcs(y);
    else return x<y;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

