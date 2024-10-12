#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int k;
    cin>>a>>k;
    for(int i=a.size()-1;i>=a.size()-k;i--)
    {
        if(a[i]=='1')
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}

