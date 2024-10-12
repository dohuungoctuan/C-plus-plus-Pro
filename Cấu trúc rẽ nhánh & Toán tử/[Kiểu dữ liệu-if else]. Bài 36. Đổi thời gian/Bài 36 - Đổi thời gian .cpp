#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long h,m,s;
    h=n/3600;
    m=(n-h*3600)/60;
    s=n-h*3600-m*60;
    cout<<h<<"h : "<<m<<"m : "<<s<<"s";
}

