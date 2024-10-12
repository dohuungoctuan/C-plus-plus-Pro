#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<(i+n);j++)
        {
            if(i%2!=0)
                cout<<(char)(j+64);
            else if(i%2==0)
                cout<<(char)(j+96);
        }
        cout<<endl;
    }
}

