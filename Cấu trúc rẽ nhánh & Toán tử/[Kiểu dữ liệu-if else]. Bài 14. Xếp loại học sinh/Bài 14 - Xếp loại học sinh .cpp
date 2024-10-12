#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double sum=(a+b+c*2+d*3)/7;
    if(sum>=8)
        cout<<"GIOI";
    else if(sum<8 && sum>=6.5)
        cout<<"KHA";
    else if(sum<6.5 && sum>=5)
        cout<<"TRUNG BINH";
    else if(sum<5)
        cout<<"YEU";
}

