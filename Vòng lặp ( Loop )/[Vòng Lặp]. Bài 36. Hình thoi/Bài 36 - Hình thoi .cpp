#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    int k=1;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=n+res;j++)
        {
            if(j>=n-res)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
        if(res<(n-k))
            {
                res++;
                continue;
            }
        else k=n+2;
        res--;
    }
}

