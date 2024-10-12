#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0;i<n;i++)
    {
        if(i==0){
            cout<<a[i+1] - a[i]<<" "<<a[n-1] - a[i]<<endl;
        }
        else if(i==n-1){
            cout<<a[i] - a[i-1]<<" "<<a[i] - a[0]<<endl;
        }
        else
        {
            long long min_val = min((a[i+1]-a[i]),(a[i]-a[i-1]));
            long long max_val = max((a[i]-a[0]),(a[n-1]-a[i]));
            cout<<min_val<<" "<<max_val<<endl;
        }
    }
}
