#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    int min_val = INT_MAX;
    for(int i=1;i<n;i++)
    {
        int value = a[i] - a[i-1];
        min_val = min(min_val, value);
    }
    cout<<min_val<<" ";
    int cnt = 0;
    for(int i=1;i<n;i++)
    {
        int value = a[i] - a[i-1];
        if(value == min_val)
            cnt++;
    }
    cout<<cnt;

}
