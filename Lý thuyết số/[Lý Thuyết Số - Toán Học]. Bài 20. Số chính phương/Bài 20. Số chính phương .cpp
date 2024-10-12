#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long res= sqrt(n);
    if(res*res==n)
        cout<<"YES";
    else cout<<"NO";
}

