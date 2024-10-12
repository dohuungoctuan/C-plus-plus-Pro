#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int dem=0;
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(nto(a[i]))
        {
            dem++;
            sum1+=a[i];
        }
    }
        cout<<fixed<<setprecision(3)<<(double)sum1/dem;


}

