#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0)
    {
        cout<<"28tech";
        return 0;
    }
    int dem=0;
    while(n!=0)
    {
        int res=n%10;
        if(res%2==0)
            dem++;
        else dem--;
        n=n/10;
    }
    if(dem>0)
        cout<<"28tech";
    else cout<<"29tech";
}

