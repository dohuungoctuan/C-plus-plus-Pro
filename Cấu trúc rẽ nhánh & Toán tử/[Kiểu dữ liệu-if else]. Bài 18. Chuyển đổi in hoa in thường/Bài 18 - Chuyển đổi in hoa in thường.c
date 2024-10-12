#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(isalpha(a))
    {
        if(isupper(a))
            cout<<(char)tolower(a);
        else cout<<(char)toupper(a);
    }
    else cout<<a;
}

