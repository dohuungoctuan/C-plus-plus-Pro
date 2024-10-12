#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    if(b==0)
    {
        cout<<"0"<<endl<<"INVALID";
    }
    else
    {
        cout<<(long long)a*b<<endl;
        cout<<fixed<<setprecision(4)<<(double)a/b;
    }
}

