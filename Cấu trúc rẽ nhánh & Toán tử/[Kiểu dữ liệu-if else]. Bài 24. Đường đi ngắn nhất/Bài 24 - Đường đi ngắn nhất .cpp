#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum1 = a + b + c;
    int sum2 = a * 2 + b * 2;
    int sum3 = a * 2 + c * 2;
    int sum4 = b * 2 + c * 2;
    cout<<min({sum1,sum2,sum3,sum4});
}

