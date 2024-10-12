#include<bits/stdc++.h>
using namespace std;
long long kt(long long n)
{
    long long sum=0;
    while(n)
    {
        sum=sum*10+n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    long long a;
    cin>>a;
    cout<<kt(a);

}

