#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)
using ll = long long;

int main()
{
  set<int> S;
  S.insert(10);
  S.insert(20);
  S.insert(40);
  S.insert(10);

  // 全要素の表示
  for (auto itr = S.begin(); itr != S.end(); ++itr)
  {
    cout << *itr << endl;
  }
}