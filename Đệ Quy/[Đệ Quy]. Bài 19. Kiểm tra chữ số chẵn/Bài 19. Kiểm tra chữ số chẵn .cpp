#include<bits/stdc++.h>
using namespace std;
int tongchan(long long n)
{
    if(n<10)
    {
        if(n%2==0)
            return 1;
        else return 0;
    }
    else
    {
        int res=n%10;
        if(res%2==1)
            return 0;
        else return tongchan(n/10);
    }
}
int main()
{
    long long n;
    cin>>n;
    if(tongchan(n)==1)
        cout<<"YES";
    else cout<<"NO";
}

