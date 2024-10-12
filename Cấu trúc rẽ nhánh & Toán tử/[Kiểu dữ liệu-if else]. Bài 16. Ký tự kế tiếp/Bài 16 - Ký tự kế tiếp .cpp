#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a=='z' || a=='Z')
        cout<<'a';
    else cout<<(char)tolower(a+1);
}

