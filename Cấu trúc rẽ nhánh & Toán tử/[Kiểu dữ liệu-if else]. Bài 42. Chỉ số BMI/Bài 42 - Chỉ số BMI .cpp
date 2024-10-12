#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    double res=(double)a/pow((double)b/100,2);
    if(res<18.5)
        cout<<"Under weight";
    else if(res>=18.5 && res<25)
        cout<<"Normal";
    else if(res>=25 && res<30)
        cout<<"Over weight";
    else if(res>=30 && res<35)
        cout<<"Obesity 1";
    else if(res>=35 && res<40)
        cout<<"Obesity 2";
    else if(res>=40)
        cout<<"Extreme obesity";
}

