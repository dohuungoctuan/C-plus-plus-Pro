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
    set<long long>prefix;
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
        if(sum == 0 || prefix.find(sum) != prefix.end())
        {
            cout<< 1;
            return 0;
        }
        prefix.insert(sum);
    }
    cout<<-1;
}

