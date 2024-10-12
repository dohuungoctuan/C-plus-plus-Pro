#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    while(n)
    {
        int res=n%10;
        int tmp=n/10%10;
        if(tmp>=res)
            return false;
        n/=10;
    }
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(kt(i))
            cout<<i<<" ";
    }

}

