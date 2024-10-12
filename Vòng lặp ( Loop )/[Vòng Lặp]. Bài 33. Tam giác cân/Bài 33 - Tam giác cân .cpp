#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n+res);j++)
        {
            if(j>=n-res)
                cout<<"* ";
            else cout<<"  ";
        }
        res++;
        cout<<endl;
    }
}

