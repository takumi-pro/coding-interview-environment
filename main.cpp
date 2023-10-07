#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main()
{
    long long n,m; cin >> n >> m;
    vector<long long> a(m);
    rep(i,m) cin >> a[i];
    vector<long long> dp(n+1, 0);
    vector<bool> j(n+1, false);
    long long s = 1e9 + 7;
    dp[0] = 1, dp[1] = 1;

    rep(i,m) {
        j[a[i]] = true;
    }

    if (j[1]) dp[1] = 0;
    if (j[0]) {
        cout << 0 << endl;
        return 0;
    }
    repi(i, 2, n+1) {
        if (j[i]) {
            continue;
        }
        dp[i] = dp[i-1] + dp[i-2];
        dp[i] %= s;
    }
    cout << dp[n] << endl;
}