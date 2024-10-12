#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=n/28;
    int sum=res;
    while(res>=3)
    {
        sum+=res/3;
        res=res-res/3*3+res/3;
    }
    cout<<sum;
}

