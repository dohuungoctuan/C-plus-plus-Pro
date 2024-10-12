#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    char x[6]={'p','y','t','h','o','n'};
    int dem=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==x[dem])
            dem++;
    }
    if(dem!=6)
        cout<<"NO";
    else cout<<"YES";

}

