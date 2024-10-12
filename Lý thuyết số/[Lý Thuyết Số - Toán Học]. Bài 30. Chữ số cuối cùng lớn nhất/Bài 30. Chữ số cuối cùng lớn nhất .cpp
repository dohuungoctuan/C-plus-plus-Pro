#include<bits/stdc++.h>
using namespace std;
int nto[10000001];
bool csc(int n)
{
    int max_val=n%10;
    while(n!=0)
    {
        if(n%10>max_val)
            return false;
        n/=10;
    }
    return true;
}
void sang()
{
    for(int i=0;i<=10000001;i++)
        nto[i]=1;
    nto[0]=nto[1]=0;
    for(int i=2;i<=sqrt(10000001);i++)
    {
        if(nto[i])
        {
            for(int j=i*i;j<=10000001;j+=i)
            {
                nto[j]=0;
            }
        }
    }
}
int main()
{
    sang();
    int n;
    int dem=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(csc(i)==true && nto[i]==true)
            {
                cout<<i<<" ";
                dem++;
            }
    }
    cout<<endl;
    cout<<dem;

}

