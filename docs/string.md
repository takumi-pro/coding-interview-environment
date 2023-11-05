# 文字列操作

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

## 指定の文字の削除
```cpp
  // 文字列の削除

  s = "abcd";
  s.erase(2, 1); // erase(n, m) n文字目からm文字削除
  cout << s << endl; // "abd"
  s.erase(1); // erase(n) n文字目以降全削除
  cout << s << endl; // "a"
```