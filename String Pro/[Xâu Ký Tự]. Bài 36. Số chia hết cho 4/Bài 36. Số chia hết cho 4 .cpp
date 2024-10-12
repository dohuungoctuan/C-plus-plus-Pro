#include<bits/stdc++.h>
using namespace std;
bool check1(string a)
{
    string k=a.substr(a.size()-2,2);
    int tmp=stoi(k);
    if(tmp%4==0)
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    if(a.size()==1)
    {
        int tmp=stoi(a);
        if(tmp%4==0)
            cout<<"YES";
        else cout<<"NO";
    }
    else
    {
        if(check1(a))
            cout<<"YES";
        else cout<<"NO";
    }
}

