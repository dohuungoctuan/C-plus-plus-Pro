#include<bits/stdc++.h>
using namespace std;
bool check1(string a)
{
    long long tmp1=0;
    long long tmp2=0;
    for(int i=0;i<a.size();i++)
    {
        if(i%2==0)
            tmp1+=(int)a[i]-48;
        else tmp2+=(int)a[i]-48;
    }
    long long sum=abs(tmp1-tmp2);
    if(sum%11==0)
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    if(check1(a)==true)
        cout<<"YES";
    else cout<<"NO";
}

