#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=1;
    for(int i=1;i<=n;i++)
    {
        long long res=1;
        for(int j=1;j<=i;j++)
        {
            res*=(long long)j;
        }
        sum+=1/(double)res;
    }
    cout<<fixed<<setprecision(2)<<sum;
}

