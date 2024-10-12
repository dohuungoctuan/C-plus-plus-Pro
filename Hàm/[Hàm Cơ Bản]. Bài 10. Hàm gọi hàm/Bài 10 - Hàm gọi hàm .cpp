#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    int sum=0;
    while(n)
    {
        sum=sum+n%10;
        n/=10;
    }
    int res=0;
    while(sum)
    {
        int tmp=sum%10;
        if(tmp%2==0)
            res++;
        else res--;
        sum/=10;
    }
    if(res>0)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(kt(i))
            cout<<i<<" ";
    }


}

