#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int tongcs(int n)
{
   int sum=0;
   while(n!=0)
   {
       sum+=n%10;
       n/=10;
   }
   return sum;
}
int ptnt(int n)
{
    int sum=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                sum+=tongcs(i);
                n/=i;
            }
        }
    }
    if(n>1)
        sum+=tongcs(n);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    if(tongcs(n)== ptnt(n) && nto(n)==false)
        cout<<"YES";
    else cout<<"NO";
}

