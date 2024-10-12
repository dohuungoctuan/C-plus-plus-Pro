#include<bits/stdc++.h>
using namespace std;
bool check(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(islower(a[i]))
            return false;
    }
    return true;
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

