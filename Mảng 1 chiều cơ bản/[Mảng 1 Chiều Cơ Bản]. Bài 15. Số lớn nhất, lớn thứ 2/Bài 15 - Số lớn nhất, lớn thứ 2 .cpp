#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max1=0;
    int max2=0;
    int res;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max1)
        {
            max1=a[i];
            res=i;
        }
    }
    a[res]=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max2)
            max2=a[i];
    }
    cout<<max1<<" "<<max2;

}

