#include<bits/stdc++.h>
using namespace std;
void latng(string n)
{
    for(int i=n.size()-1;i>=0;i--)
        cout<<n[i];
    cout<<endl;
}
void inhoa(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(isalpha(a[i]))
        {
            if(islower(a[i]))
                cout<<(char)toupper(a[i]);
            else cout<<a[i];
        }
        else cout<<a[i];
    }
    cout<<endl;
}
void inthg(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(isalpha(a[i]))
        {
            if(isupper(a[i]))
                cout<<(char)tolower(a[i]);
            else cout<<a[i];
        }
        else cout<<a[i];
    }
    cout<<endl;
}
int main()
{
    string n;
    cin>>n;
    latng(n);
    inthg(n);
    inhoa(n);
}

