#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        for(int i=2;i<=x/2;i++)
        {
            if(nto(x-i) && nto(i))
            {
                cout<<i<<" "<<x-i<<endl;
            }
        }
    }
}

