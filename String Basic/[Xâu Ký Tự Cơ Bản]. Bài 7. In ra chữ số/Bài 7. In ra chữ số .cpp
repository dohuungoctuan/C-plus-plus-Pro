#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<char>v;
    vector<char>v1;
    for(int i=0;i<a.size();i++)
    {
        if(isdigit(a[i]))
            v.push_back(a[i]);
        else v1.push_back(a[i]);
    }
    for(auto x:v)
        cout<<x;
    cout<<endl;
    for(auto x:v1)
        cout<<x;
}

