#include<bits/stdc++.h>
using namespace std;
bool check(string a)
{
    long long res=0;
    while(a.size()!=1)
    {
        for(int i=0;i<a.size();i++)
            res+=(a[i]-'0');
        a=to_string(res);
        res=0;
    }
    if(a=="9")
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    if(a.size()==1 && a=="9")
        cout<<"YES";
    else if(check(a))
        cout<<"YES";
    else cout<<"NO";

}

