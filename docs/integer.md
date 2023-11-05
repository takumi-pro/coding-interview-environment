# 整数関連

## 素数の判定
素数は「1と自分自身以外では割り切れない整数」のこと
与えられた整数Nが素数か判定する場合は

> そのN回だけループを回し`N%i`で判定

すれば良いが、
ループは`√N`までで十分

```cpp
bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    long long N;
    cin >> N;
    if (is_prime(N)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
```

## 約数列挙
約数は「整数Nを割り切ることのできる整数」

```cpp
vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main() {
    long long N;
    cin >> N;
    const auto &res = enum_divisors(N);
    for (int i = 0; i < res.size(); ++i) cout << res[i] << " ";
    cout << endl;
}
```
