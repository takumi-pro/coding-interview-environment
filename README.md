# coding-interview environment
競技プログラミングのためのc++環境と汎用プログラム集

- Table of Content
{:toc}

## 目次
- [入力](#入力)
- [ASCIIコード](#asciiコード)
- [文字列操作](#文字列操作)
- [配列操作](#配列操作)
- [整数関連](#整数関連)
  - [素数判定](#素数の判定)
- [アルゴリズムとデータ構造](#アルゴリズムとデータ構造)
- [STL機能](#stl機能)
- [環境構築](#環境構築)

## 入力
### 1行の入力を受け取る
getlineを用いる
```cpp
int main() {
    string s;
    getline(cin, s);
    cout << s << endl;
}
```

## ASCIIコード
### 文字列の大文字判定コード
```cpp
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (65 <= s[i] && s[i] <= 90) {
            // 大文字である場合の処理を記述
            // 大文字を小文字にする
            s[i] = (char)(s[i]+32);
        }
    }
    for (int i = 0; i < s.size(); i++) cout << s[i];
    cout << endl;
}
```

### 文字列の小文字判定コード
```cpp
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
```

### 参考
- [ASCII文字コード表](https://qiita.com/disapalt/items/7c816f8460c3969662f6)

## 文字列操作
```cpp
  // 文字列の削除

  s = "abcd";
  s.erase(2, 1); // erase(n, m) n文字目からm文字削除
  cout << s << endl; // "abd"
  s.erase(1); // erase(n) n文字目以降全削除
  cout << s << endl; // "a"
```

## 配列操作

### 配列の最後の要素を取得する
`*std::rbegin()`を使用する

```cpp

```

## 整数関連

### 素数の判定
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

### 約数列挙
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


## アルゴリズムとデータ構造
- [動的計画法（dynamic-programming）](./dynamic-programming/dynamic-programming.md)
- [しゃくとり法（two-pointer）](./two-pointer/two-pointer.md)
- [二分探索](./binary-search/binary-search.md)

## [STL機能](./STL/stl.md)

## 環境構築

### Dev Containersのインストール
VSCodeの拡張機能「[DevContainers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)」をインストールする。

### コンテナ立ち上げ
`command + Shift + P`でコマンドパレットを開き、`Reopen in Container`を選択

`Dockerfile`からイメージを作成してコンテナ起動するため、`From Dockerfile`を選択

### プログラム実行
`main.cpp`を編集して`make run`コマンドを実行することで標準出力に出力される
