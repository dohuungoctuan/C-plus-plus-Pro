#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(isdigit(a[i]))
        {
            sum+=(int)a[i]-48;
        }
    }
    cout<<sum;
}

