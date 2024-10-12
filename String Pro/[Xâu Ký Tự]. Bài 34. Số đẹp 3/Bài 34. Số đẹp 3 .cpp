#include<bits/stdc++.h>
using namespace std;
bool check1(string a)
{
    for(int i=1;i<a.size();i++)
    {
        if(a[i]>a[i-1])
            return false;
    }
    return true;
}
bool check2(string a)
{
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<a[i-1])
            return false;
    }
    return true;
}
int main()
{
    string a;
    cin>>a;
    if(check1(a)==true || check2(a)==true)
        cout<<"YES";
    else cout<<"NO";
}

