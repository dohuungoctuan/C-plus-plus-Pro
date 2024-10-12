#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=2*n;i+=2)
    {
        sum+=i;
    }
    cout<<sum;
}

