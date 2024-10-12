#include<bits/stdc++.h>
using namespace std;
bool check1( string a)
{
    string tmp1="@gmail.com";
    string tmp2="@28tech.com.vn";
    string tmp3="@yahoo.com";
    string tmp4="@hotmail.com";
    if(a.find(tmp1)==string::npos && a.find(tmp2)==string::npos && a.find(tmp3)==string::npos && a.find(tmp4)==string::npos)
        return false;
    return true;
}
bool check2(string a)
{

    for(int i=0;i<a.size();i++)
    {
        if(!(isalnum(a[i]) || a[i]=='@' || a[i]=='.' || a[i]=='_'))
            return false;
    }
    return true;
}
bool check3(string a)
{
    int dem=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='@')
            dem++;
    }
    if(dem!=1)
        return false;
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
        if(check1(x)==true && check2(x)==true && check3(x)==true)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

