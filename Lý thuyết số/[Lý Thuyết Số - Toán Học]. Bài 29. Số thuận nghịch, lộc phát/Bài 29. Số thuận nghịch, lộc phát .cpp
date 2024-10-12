#include<bits/stdc++.h>
using namespace std;
bool thuannghich(int n)
{
    int tmp=0;
    int res=n;
    while(n!=0)
    {
        tmp=tmp*10+(n%10);
        n/=10;
    }
    if(res==tmp)
        return true;
    else return false;
}
bool locphat(int n)
{
    int sum=0;
    int dem=0;
    while(n!=0)
    {
        int tmp=n%10;
        sum+=tmp;
        if(tmp==6)
            dem++;
        n/=10;
    }
    sum=sum%10;
    if(sum==8 && dem>0)
        return true;
    else return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(thuannghich(i) && locphat(i))
            cout<<i<<" ";
    }

}

