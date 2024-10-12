#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0, j=n-1;
    int dem=0;
    while(i<j)
    {
        long long tmp = a[i] + a[j];
        if(tmp > k)
        {
            j--;
            dem++;
        }
        else
        {
            dem++;
            i++;
            j--;
        }
    }
    if(i==j)
        dem++;
    cout<<dem;
}

