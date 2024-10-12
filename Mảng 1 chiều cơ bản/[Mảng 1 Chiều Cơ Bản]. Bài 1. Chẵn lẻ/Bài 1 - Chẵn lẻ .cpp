#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int dem=0;
    int dem2=0;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            dem++;
            sum1+=a[i];
        }
        else{
            dem2++;
            sum2+=a[i];
        }
    }
    cout<<dem<<endl<<dem2<<endl<<sum1<<endl<<sum2;
}

