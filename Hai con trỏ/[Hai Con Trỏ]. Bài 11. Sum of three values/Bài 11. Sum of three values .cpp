#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
     ll n, k;
     cin >> n >> k;
     ll a[n];
     for (ll i = 0; i < n; i++)
     {
          cin >> a[i];
     }
     sort(a, a + n);
     for (ll i = 0; i < n - 2; i++)
     {
          ll l = i + 1, r = n - 1;
          while (l < r)
          {
               if (a[l] + a[r] + a[i] == k)
               {
                    cout << "YES";
                    return 0;
               }
               else
               {
                    if (a[l] + a[r] + a[i] < k)
                    {
                         l++;
                    }
                    else
                    {
                         r--;
                    }
               }
          }
     }
     cout << "NO";
}

