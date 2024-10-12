#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    n=a.size();
    for(int i=1;i<n;i++)
    {
        vector<int>v1;
        bool check=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                cout<<"Buoc "<<i<<": ";
                for(int k=0;k<j;k++)
                {
                    cout<<a[k]<<" ";
                    v1.push_back(a[k]);
                }
                cout<<a[i]<<" ";
                v1.push_back(a[i]);
                for(int o=j;o<i;o++)
                {
                    cout<<a[o]<<" ";
                    v1.push_back(a[o]);
                }
                for(int f=i+1;f<n;f++)
                {
                    cout<<a[f]<<" ";
                    v1.push_back(a[f]);
                }
                swap(v1,a);
                cout<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"Buoc "<<i<<": ";
            for(auto x:a)
                 cout<<x<<" ";
            cout<<endl;
        }
    }
}

