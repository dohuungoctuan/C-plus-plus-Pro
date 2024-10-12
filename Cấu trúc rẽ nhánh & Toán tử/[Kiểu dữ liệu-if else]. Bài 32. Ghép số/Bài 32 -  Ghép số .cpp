#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long sum=min({a,c,d});
    a=a-sum;
    long long sum1=min(a,b);
    cout<<sum*256+sum1*32;
}

