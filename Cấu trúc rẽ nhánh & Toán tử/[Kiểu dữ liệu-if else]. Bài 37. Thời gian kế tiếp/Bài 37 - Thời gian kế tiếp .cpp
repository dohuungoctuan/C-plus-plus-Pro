#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int d;
   d = (b+c)-((b+c)/28*28);
   a = (a+(b+c)/28)-((a+(b+c)/28))/28*28;
   cout<<setw(2)<<setfill('0')<<a<<"h:";
   cout<<setw(2)<<setfill('0')<<d<<"m";

}

