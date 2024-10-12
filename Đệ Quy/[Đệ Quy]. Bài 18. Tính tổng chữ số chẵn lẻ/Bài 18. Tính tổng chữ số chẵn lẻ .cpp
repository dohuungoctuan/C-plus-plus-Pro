#include<bits/stdc++.h>
using namespace std;
int tongchan(long long n)
{
    if(n<10)
    {
        if(n%2==0)
            return n;
        else return 0;
    }
    else
    {
        int res=n%10;
        if(res%2==0)
            return res+tongchan(n/10);
        else return tongchan(n/10);
    }
}
int tongle(long long n)
{
    if(n<10)
    {
        if(n%2==0)
            return 0;
        else return n;
    }
    else
    {
        int res=n%10;
        if(n%2==0)
            return tongle(n/10);
        else return res+tongle(n/10);
    }
}
int main()
{
    long long n;
    cin>>n;
    cout<<tongchan(n)<<endl;
    cout<<tongle(n);
}

