#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int maxLength = INT_MIN;
    int l = 0;
    for(int r=0;r<n;r++)
    {
        while(a[r]-a[l] > k){
            l++;
        }
        maxLength = max(maxLength,r-l+1);
    }
    cout<<maxLength;
}

