#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<=n/111;i++)
    {
        long long tu=n-i*111;
        if(tu%11==0)
           {
               cout<<"YES";
               return 0;
           }
    }
    cout<<"NO";
}

