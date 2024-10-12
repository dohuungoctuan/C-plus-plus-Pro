#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long n;
    cin>>n;
    long long ans=sqrt(n);
    if(ans*ans==n)
        cout<<"YES";
    else cout<<"NO";
}

