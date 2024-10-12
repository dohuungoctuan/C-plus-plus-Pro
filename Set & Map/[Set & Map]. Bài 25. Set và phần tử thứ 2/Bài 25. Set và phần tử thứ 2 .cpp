#include<bits/stdc++.h>
using namespace std;
int cnt[1000000];
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int>se;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        se.insert(a[i]);
    }
    cout<<se.size()<<endl;
    cout<<*se.rbegin()<<" "<<*se.begin()<<endl;
    auto it2=se.rbegin();
    auto it3=next(it2,1);
    cout<<*it3<<" ";
    auto it=se.begin();
    auto it1=next(it,1);
    cout<<*it1<<" ";

}

