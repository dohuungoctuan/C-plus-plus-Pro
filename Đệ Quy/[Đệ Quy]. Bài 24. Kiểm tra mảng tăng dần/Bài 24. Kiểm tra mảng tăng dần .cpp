#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int i, int j, int n)
{
    if(j>=n)
        return true;
    else if(a[i]>=a[j])
        return false;
    else return check(a,i+1,j+1,n);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(check(a,0,1,n))
        cout<<"YES";
    else cout<<"NO";
}

