#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum = 0;
    int l = 0;
    int minLength = INT_MAX;
    for(int r=0;r<n;r++)
    {
        sum = sum + a[r];
        while(sum >= k)
        {
            if(sum == k){
                minLength = min(minLength, r-l+1);
            }
            sum = sum - a[l];
            l++;
        }
    }
    if(minLength == INT_MAX)
        cout<< -1 <<endl;
    else
        cout<<minLength;
}
