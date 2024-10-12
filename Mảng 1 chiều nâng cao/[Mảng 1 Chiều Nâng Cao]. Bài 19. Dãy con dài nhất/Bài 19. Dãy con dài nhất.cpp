#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n + 1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    a[n] = a[n - 1];
    n++;
    long long dem = 0, sum = 0;
    long long ans = 0, sum_max = 0, index = -1;
    for(int i=1;i<n;i++)
    {
        if(a[i] != a[i-1])
        {
            dem++;
            sum += a[i];
        }
        else
        {
            if(dem > ans)
            {
                ans = dem;
                index = i - 1;
                sum_max = sum;
            }
            else if(dem == ans && sum > sum_max)
            {
                sum_max = sum;
                index = i - 1;
            }
            dem = 1;
            sum = a[i];
        }
    }
    cout<< ans << endl;
    for(int i = index - ans + 1;i <= index; i++)
        cout<<a[i]<<" ";
}
