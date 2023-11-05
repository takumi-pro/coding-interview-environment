#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)
using ll = long long;
using Graph = vector<vector<int>>;

int main()
{
  ll b;
  cin >> b;

  repi(i, 1, 16) {
    ll ii = pow(i, i);
    if (ii == b) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}