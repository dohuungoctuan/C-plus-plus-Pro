#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dem=0;
    int n;
    while(cin>>n)
    {
        if(n%2==0)
            dem++;
        else dem--;
    }
    if(dem>0) cout<<"CHAN";
    else if(dem<0) cout<<"LE";
    else cout<<"CHANLE";
}

