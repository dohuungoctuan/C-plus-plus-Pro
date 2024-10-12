#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x == 0) cnt_0++;
        if(x == 1) cnt_1++;
        if(x == 2) cnt_2++;
    }
    for(int i=0;i<cnt_0;i++)
        cout<<0<<" ";
    for(int i=0;i<cnt_1;i++)
        cout<<1<<" ";
    for(int i=0;i<cnt_2;i++)
        cout<<2<<" ";
}

