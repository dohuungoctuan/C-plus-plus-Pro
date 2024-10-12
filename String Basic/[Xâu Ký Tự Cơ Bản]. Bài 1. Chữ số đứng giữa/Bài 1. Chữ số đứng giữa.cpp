#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a=to_string(n);
    if(a.size()%2==0)
        cout<<"NOT FOUND";
    else cout<<a[a.size()/2];
}

