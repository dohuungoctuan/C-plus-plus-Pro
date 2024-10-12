#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int res=1;
        for(int j=1;j<=i;j++)
            res*=j;
        sum+=1/(double)res;
    }
    cout<<fixed<<setprecision(4)<<sum;

}

