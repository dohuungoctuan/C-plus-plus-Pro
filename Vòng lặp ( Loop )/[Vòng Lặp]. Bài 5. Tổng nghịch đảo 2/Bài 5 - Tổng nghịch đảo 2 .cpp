#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=1/((double)i*2);
    }
    cout<<fixed<<setprecision(5)<<sum;
}

