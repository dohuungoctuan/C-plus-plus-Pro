#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long sum = 0;
    for(int i=0;i<k;i++)
        sum+=a[i];
    int max_sum = sum;
    int index = 0;
    for(int i=k;i<n;i++)
    {
        sum = sum - a[i-k] + a[i];
        if(sum > max_sum)
        {
            max_sum = sum;
            index = i-k+1;
        }
    }
    cout<<max_sum<<endl;
    for(int i = index; i < index+k; i++)
    {
        cout<<a[i]<<" ";
    }
}
