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
    for(int i=0;i<n-maxLength;i++) // (i < n-maxLength) vì trong khoảng từ n-maxLength đến n độ dài tối đa chỉ bảng maxLength 
    {                              // nên cho dù có dãy con thỏa mãn cũng không giải quyết được gì.
        for(int j=i+maxLength;j<n;j++)   // (j = i+maxLength) vì từ i -> maxLength dù có dãy con thỏa mãn nhưng độ dài tối đa cũng chỉ bằng maxLength.
        {
            if((prefix[j+1] - prefix[i]) % k == 0){
                int length = j - i + 1;
                maxLength = max(length, maxLength);
            }
        }
    }
    cout<<maxLength;
}

