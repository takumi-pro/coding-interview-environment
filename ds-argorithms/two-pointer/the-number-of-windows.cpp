#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void) {
  int N,Q;
  cin >> N >> Q;
  vector<int> a(N), x(Q);
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = 0; i < Q; i++) cin >> x[i];

  for (int i = 0; i < Q; i++) {
    int right = 0;
    long long ans = 0;
    long long sum = 0;
    for (int left = 0; left < N; left++) {
      while(right < N && sum + a[right] <= x[i]) {
        sum += a[right];
        right++;
      }

      ans += right - left;
      if (left == right) right++;
      else sum -= a[left];
    }
    cout << ans << endl;
  }

  return 0;
}