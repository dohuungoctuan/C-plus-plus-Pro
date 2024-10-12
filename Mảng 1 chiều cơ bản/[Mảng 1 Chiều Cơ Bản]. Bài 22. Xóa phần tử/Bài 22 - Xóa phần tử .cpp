#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int k[a];
    for(int i=0;i<a;i++)
        cin>>k[i];
    bool check=false;
    for(int i=0;i<a;i++)
    {
        if(k[i]==b)
        {
            check=true;
            for(int j=i;j<a-1;j++)
            {
                {
                    k[j]=k[j+1];
                }
            }
            break;
        }
    }
    if(check==false)
    {
        cout<<"NOT FOUND";
        return 0;
    }
    a--;
    for(int i=0;i<a;i++)
        cout<<k[i]<<" ";
}

