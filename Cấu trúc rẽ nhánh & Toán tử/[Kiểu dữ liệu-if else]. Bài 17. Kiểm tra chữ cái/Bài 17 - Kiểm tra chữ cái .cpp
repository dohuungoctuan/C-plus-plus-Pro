#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(isupper(a))
        cout<<"UPPER";
    else if(islower(a))
        cout<<"LOWER";
    else if(isdigit(a))
        cout<<"DIGIT";
    else if(!isalpha(a) && !isdigit(a))
        cout<<"SPECIAL";
}

