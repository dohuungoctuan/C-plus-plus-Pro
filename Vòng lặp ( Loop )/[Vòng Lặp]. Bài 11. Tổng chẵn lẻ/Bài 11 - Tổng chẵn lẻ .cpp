#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            sum+=i;
        else
            sum-=i;
    }
    cout<<sum;
}

