#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)
using ll = long long;

int main()
{
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);

  ll ans;
  if (k <= x / d)
  {
    ans = x - k * d;
  }
  else
  {
    k -= x / d;
    x -= x / d * d;
    if (k % 2 == 1)
      x -= d;
    ans = abs(x);
  }

  cout << ans << endl;
}