#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n)
{
    if(n<1)
        return true;
    if(a[n]%2==1)
        return false;
    else return check(a,n-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(check(a,n)==true)
        cout<<"YES";
    else cout<<"NO";

}

