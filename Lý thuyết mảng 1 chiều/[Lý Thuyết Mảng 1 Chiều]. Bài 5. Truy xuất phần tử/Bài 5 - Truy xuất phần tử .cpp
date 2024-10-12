#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<a[0]<<" "<<a[n-1]<<endl;
    cout<<a[1]<<" "<<a[n-2]<<endl;
    if(n%2==0)
        cout<<"28tech";
    else cout<<a[n/2];
}

