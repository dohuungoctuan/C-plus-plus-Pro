#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long C[1001][1001];
void tohop(){
for(int i=0;i<1000;i++)
{
    for(int j=0;j<1000;j++)
    {
        if(j==i || j==0) C[i][j]=1;
        else {
                C[i][j]=C[i-1][j]+C[i-1][j-1];
                C[i][j]%=mod;
        }
    }
}
}
int main()
{
    tohop();
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        cout<<C[x][y]<<endl;
    }
}

