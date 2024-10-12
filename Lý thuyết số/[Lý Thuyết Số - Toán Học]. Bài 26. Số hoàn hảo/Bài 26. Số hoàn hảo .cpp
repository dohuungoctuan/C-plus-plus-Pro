#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool nto(long long n)
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
long long ans[10];
int n=0;
void hoanhao()
{
    for(int i=2;i<=32;i++)
    {
        if(nto(i))
        {
            long long tmp=(int)pow(2,i)-1;
            if(nto(tmp))
            {
                ans[n++]=1ll*tmp*(int)pow(2,i-1);
            }
        }
    }
}
int main()
{
    hoanhao();
    long long n;
    cin>>n;
    for(auto x:ans)
    {
        if(x==n)
            {
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";

}

