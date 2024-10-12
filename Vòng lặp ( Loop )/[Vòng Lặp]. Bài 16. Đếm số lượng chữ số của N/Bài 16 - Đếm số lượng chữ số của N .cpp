#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,dem=0;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    while(n!=0){
        int s=(n%10);
        n/=10;
        dem++;
    }
    cout<<dem;
        return 0;
}
