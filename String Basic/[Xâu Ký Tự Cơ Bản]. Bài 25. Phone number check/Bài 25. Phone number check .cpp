#include<bits/stdc++.h>
using namespace std;
bool check(string a)
{
    if(a[0]!='0')
        return false;
    if(a.size()!=10 && a.size()!=11)
        return false;
    for(int i=0;i<a.size();i++)
    {
        if(!isdigit(a[i]))
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(auto x:a)
    {
        if(check(x))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

