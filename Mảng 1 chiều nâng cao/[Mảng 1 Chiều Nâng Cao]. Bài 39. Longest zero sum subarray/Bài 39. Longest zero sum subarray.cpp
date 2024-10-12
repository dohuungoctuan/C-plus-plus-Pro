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
    unordered_map<long long,int>prefix;
    long long sum = 0;
    int maxLength = 0;
    int index = -1;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
        if(sum == 0)
        {
            index = i;
            maxLength = i + 1;
        }
        if(prefix.find(sum) != prefix.end())
        {
            if(i - prefix[sum] > maxLength)
            {
                maxLength = i - prefix[sum];
                index = i;
            }
        }
        else
        {
            prefix[sum] = i;
        }
    }
    vector<int>v;
    for(int i=index+1-maxLength;i<=index;i++)
        v.push_back(a[i]);
    if(v.empty())
        cout<<"NOT FOUND";
    else
    {
        for(auto x : v)
            cout<<x<<" ";
    }
}

