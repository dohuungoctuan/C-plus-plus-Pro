#include<bits/stdc++.h>
using namespace std;
bool thng(int n)
{
    int res=n;
    int sum=0;
    while(n!=0)
    {
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==res)
        return true;
    else return false;
}
bool ptnt(int n)
{
    int dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            dem++;
            while(n%i==0)
            {
                n/=i;
            }
            if(dem>=3)
                return true;
        }
    }
    if(n>1)
        dem++;
    if(dem>=3)
        return true;
    else return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    bool check=false;
    for(int i=a;i<=b;i++)
    {
        if(thng(i) && ptnt(i))
            {
                cout<<i<<" ";
                check=true;
            }
    }
    if(check==false)
        cout<<"-1";

}

