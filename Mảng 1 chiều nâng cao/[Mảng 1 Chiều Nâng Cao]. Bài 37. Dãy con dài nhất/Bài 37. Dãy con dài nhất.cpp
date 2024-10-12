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
    long long prefix[n+1] = {0};
    for(int i=0;i<n;i++)
    {
        prefix[i+1] = prefix[i] + a[i];
    }
    int maxLength = 0;
    for(int i=0;i<n-maxLength;i++)
    {
        for(int j=i+maxLength;j<n;j++)
        {
            if((prefix[j+1] - prefix[i]) % k == 0){
                int length = j - i + 1;
                maxLength = max(length, maxLength);
            }
        }
    }
    cout<<maxLength;
}

