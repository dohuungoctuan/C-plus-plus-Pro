#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem1=0;
    int dem2=0;
    while(n--)
    {
        char c;
        cin>>c;
        if(c=='C')
            dem1++;
        if(c=='+')
            dem2++;
    }
    if(dem1>=1 && dem2>=2)
        cout<<"YES";
    else cout<<"NO";
}

