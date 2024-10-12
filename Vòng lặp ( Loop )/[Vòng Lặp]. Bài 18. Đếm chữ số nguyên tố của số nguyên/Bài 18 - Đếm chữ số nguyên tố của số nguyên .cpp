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
    long long n;
    cin>>n;
    long long sum=0;
    while(n!=0)
    {
        int i=n%10;
        if(nto(i)==true)
            sum++;
        n=n/10;
    }
    cout<<sum;
}

