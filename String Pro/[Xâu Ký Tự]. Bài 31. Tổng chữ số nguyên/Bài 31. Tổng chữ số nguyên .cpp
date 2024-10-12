#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long sum=0;
    for(auto x:a)
    {
        sum+=(int)x - 48;
    }
    cout<<sum;
}

