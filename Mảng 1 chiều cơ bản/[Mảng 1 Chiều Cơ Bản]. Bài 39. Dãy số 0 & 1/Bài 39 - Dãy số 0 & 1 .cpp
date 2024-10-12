#include<bits/stdc++.h>
using namespace std;
void sequen(int a[], int n, int x)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            dem++;
        else
        {
            if(dem!=0)
            {
                cout<<dem<<" ";
                dem=0;
            }
        }
    }
    if(dem!=0) cout<<dem;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sequen(a,n,1);
    cout<<endl;
    sequen(a,n,0);
}

