#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i || j==n-res)
                cout<<i<<" ";
            else cout<<"  ";
        }
        res++;
        cout<<endl;
    }
}

