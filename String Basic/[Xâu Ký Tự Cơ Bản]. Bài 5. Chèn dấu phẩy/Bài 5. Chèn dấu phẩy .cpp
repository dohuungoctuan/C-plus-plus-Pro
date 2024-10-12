#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<char>v;
    int dem=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        v.push_back(a[i]);
        dem++;
        if(dem%3==0)
        {
            v.push_back(',');
            dem=0;
        }
    }
    if(a.size()%3==0)
        v.pop_back();
    for(auto it=v.rbegin(); it!=v.rend();it++)
        cout<<*it;
}

