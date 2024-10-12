#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    int dem=1;
    int k=v.size();
    for(int j=1;j<n;j++)
    {
        for(int i=1;i<k;i++)
        {
            if(v[i]<v[i-1])
                swap(v[i],v[i-1]);
        }
        cout<<"Buoc "<<j<<": ";
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}

