#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        if(isalpha(a[i]))
        {
            if(islower(a[i]));
            {
                a[i]=toupper(a[i]);
            }
        }
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        if(isalpha(a[i]))
        {
            if(isupper(a[i]));
            {
                a[i]=tolower(a[i]);
            }
        }
        cout<<a[i];
    }
}

