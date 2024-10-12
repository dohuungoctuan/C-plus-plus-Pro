#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long F[n];
    F[0] = a[0];
    for(int i=1;i<n;i++){
        F[i] = F[i-1] + a[i];
    }
    int q; cin>>q;
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        x--; y--;
        if(x == 0)
            cout<<F[y]<<endl;
        else cout<<F[y] - F[x - 1]<<endl;
    }
}
