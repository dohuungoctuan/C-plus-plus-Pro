#include<bits/stdc++.h>
using namespace std;
bool check1(string a)
{
    char k=a[a.size()-1];
    if(k=='0' || k=='5')
        return true;
    return false;
}
bool check2(string a)
{
    long long sum=0;
    for(auto x:a)
    {
        int tmp=(int)x - 48;
        sum+=tmp;
    }
    if(sum%3==0)
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    if(check1(a)==true && check2(a)==true)
        cout<<"YES";
    else cout<<"NO";
}

