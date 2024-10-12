#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x%2==0)
            sum+=x;
    }
    cout<<sum;
}

