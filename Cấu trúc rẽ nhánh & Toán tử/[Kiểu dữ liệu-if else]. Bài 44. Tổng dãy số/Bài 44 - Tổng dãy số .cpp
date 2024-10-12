#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    cout<<sum<<endl;
    long long sum1=0;
    for(int i=1;i<=n;i++)
        sum1+=1ll*i*i;
    cout<<sum1<<endl;
    int dem=0;
    long long sum2=0;
    for(int i=3;i<=n;i++)
    {
        if(i%3==0)
            {
                dem++;
                sum2+=i;
            }
    }
    cout<<dem<<endl;
    cout<<sum2;
}
N
