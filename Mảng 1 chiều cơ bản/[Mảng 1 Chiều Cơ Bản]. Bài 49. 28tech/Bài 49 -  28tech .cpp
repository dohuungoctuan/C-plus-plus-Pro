#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    char t[6] = {'2', '8', 't', 'e', 'c', 'h'};
    int j = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] == t[j])
            ++j;
        if (j == 6)
            break;
    }
    if (j == 6)
        cout << "28TECH";
    else
        cout << "HCET82";
    return 0;
}
