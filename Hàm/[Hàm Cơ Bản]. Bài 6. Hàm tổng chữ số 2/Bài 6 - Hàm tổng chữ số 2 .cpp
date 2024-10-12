#include<bits/stdc++.h>
using namespace std;
int sum_digit(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<sum_digit(a[i])<<" ";
    }
}

