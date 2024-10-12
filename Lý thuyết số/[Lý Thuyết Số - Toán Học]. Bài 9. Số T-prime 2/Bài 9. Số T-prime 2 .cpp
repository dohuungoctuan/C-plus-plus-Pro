#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    long long n;
    cin>>n;
    int dem=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(nto(i))
            dem++;
    }
    cout<<dem;
}

