#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    cin.getline(a,10000);
    char k[]=".,!?";
    char *token=strtok(a,k);
    while(token!=NULL)
    {
        cout<<token<<" ";
        token=strtok(NULL,k);
    }
}

