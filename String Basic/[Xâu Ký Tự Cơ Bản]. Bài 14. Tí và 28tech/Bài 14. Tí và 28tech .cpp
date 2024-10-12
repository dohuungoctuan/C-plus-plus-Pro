#include<bits/stdc++.h>
using namespace std;
bool check(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(isalpha(a[i]))
        {
            if(isupper(a[i]));
            {
                a[i]=tolower(a[i]);
            }
        }
    }
    string b="28tech";
    if(a==b)
        return true;
    else return false;
}
int main()
{
    string a;
    getline(cin,a);
    int dem=0;
    stringstream ss(a);
    string w;
    while(ss>>w)
    {
        if(check(w))
            dem++;
    }
    cout<<dem;
}

