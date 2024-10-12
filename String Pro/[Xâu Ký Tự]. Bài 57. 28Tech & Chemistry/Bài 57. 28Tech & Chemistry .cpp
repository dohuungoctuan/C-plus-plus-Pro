#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>mp;
    for(int i=1;i<=10;i++)
    {
        string a; int b;
        cin>>a>>b;
        mp.insert({a,b});
    }
    int n; cin>>n;
    for(int j=0;j<n;j++)
    {
        long long sum=0;
        long long res=0;
        string a; cin>>a;
        int i=0; int ans=a.size();
        while(i<ans)
        {
            string ele="";
            while(isalpha(a[i]))
            {
                ele+=a[i];
                i++;
            }
            int k=0;
            while(i<ans && isdigit(a[i]))
            {
                sum=sum*10+(a[i]-'0');
                i++;
            }
            if(sum==0) sum=1;
            res+=sum*mp[ele];
            ele="";
            sum=0;
        }
        cout<<res<<endl;
    }
}

