#include<bits/stdc++.h>
using namespace std;
int ptnt(int n)
{
    int ans=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans=i;
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
        ans=n;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<ptnt(x)<<endl;
    }
}

