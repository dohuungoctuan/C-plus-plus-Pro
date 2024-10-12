#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    sort(a,a+n,greater<char>());
    for(auto x:a)
        cout<<x<<" ";
}

