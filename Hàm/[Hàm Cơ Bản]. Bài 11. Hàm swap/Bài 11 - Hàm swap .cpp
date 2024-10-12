#include<bits/stdc++.h>
using namespace std;
void swapp( int a, int b)
{
    int res=a;
    a=b;
    b=res;
    cout<<a<<" "<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swapp(a,b);
}

