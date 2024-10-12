#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for(int j=1;j<=res;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<2*i-1<<" ";
        int tmp=2;
        for(int j=1;j<=res;j++)
        {
            cout<<2*i-tmp<<" ";
            tmp++;
        }
        res++;
        cout<<endl;
    }

}

