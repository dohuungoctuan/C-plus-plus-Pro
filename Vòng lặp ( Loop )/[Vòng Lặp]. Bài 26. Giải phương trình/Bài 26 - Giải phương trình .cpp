    #include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=0;i<=n/a;i++)
    {
        if((n-a*i)%b==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

