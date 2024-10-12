#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=1;i<a.size();i++)
    {
        int res=abs((int)a[i]-(int)a[i-1]);
        if(res!=1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

