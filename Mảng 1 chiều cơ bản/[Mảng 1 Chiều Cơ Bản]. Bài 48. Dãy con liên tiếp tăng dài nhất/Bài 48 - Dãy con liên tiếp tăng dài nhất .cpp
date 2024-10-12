#include<bits/stdc++.h>
using namespace std;
int demtangchat(int a[], int n)
{
    int dem=0;
    int dem1=1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>a[i-1])
            dem1++;
        else
        {
            if(dem1>dem)
                dem=dem1;
            dem1=1;
        }
    }
    return dem;
}
int main()
{
    int k;
    cin>>k;
    int q=1;
    while(k--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        a[n]=-1e9;
        int res=demtangchat(a,n);
        cout<<"Test #"<<q<<" :"<<endl;
        cout<<res<<endl;
        int dem=res-1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>a[i-1])
            {
                dem--;
            }
            else
            {
                if(dem==0)
                    {
                        for(int j=i-res;j<i;j++)
                        cout<<a[j]<<" ";
                        cout<<endl;
                        dem=res-1;
                    }
                else
                {
                    dem=res-1;
                }
            }
        }
        q++;
    }
}

