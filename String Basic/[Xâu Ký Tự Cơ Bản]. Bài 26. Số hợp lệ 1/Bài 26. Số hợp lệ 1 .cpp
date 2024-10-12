#include<bits/stdc++.h>
using namespace std;
bool check(string a)
{
    int k=a.size()-1;
    if(a[0]%2!=a[k]%2)
        return false;
    for(int i=0;i<a.size()-1;i++)
    {
        if(abs(a[i]-a[i+1])==3)
            return false;
    }
    string tmp="28";
    string tmp1="82";
    if(a.find(tmp)==string::npos && a.find(tmp1)==string::npos)
        return true;
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string x;
        getline(cin,x);
        if(check(x))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

