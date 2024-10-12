#include<bits/stdc++.h>
using namespace std;
bool check1(string a)
{
    string k=a.substr(a.size()-2,2);
    if(k=="00")
        return true;
    int tmp=stoi(k);
    if(tmp%25==0)
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    if(a.size()==1)
    {
        if(a=="0")
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
        return 0;
        }
    }
    if(check1(a)==true)
        cout<<"YES";
    else cout<<"NO";
}

