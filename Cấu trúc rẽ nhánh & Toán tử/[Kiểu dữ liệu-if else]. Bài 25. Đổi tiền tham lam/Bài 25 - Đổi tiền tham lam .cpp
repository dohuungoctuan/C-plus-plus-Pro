#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int sum = 0;
    sum += x / 100;
    x = x - x / 100 * 100;
    sum + = x / 20;
    x = x - x / 20 * 20;
    sum + = x / 10;
    x = x - x / 10 * 10;
    sum + = x / 5;
    x = x - x /5 * 5;
    sum += x;
    cout<<sum;
}
