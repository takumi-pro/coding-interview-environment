#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (97 <= s[i] && s[i] <= 122) {
            // 小文字である場合の処理を記述
            // 小文字を大文字にする
            s[i] = (char)(s[i]-32);
        }
    }
    for (int i = 0; i < s.size(); i++) cout << s[i];
    cout << endl;
}