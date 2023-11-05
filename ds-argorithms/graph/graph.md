# グラフ

## グラフの入力
- 頂点数
- 辺数
- i番目の辺が頂点Ai・Biを結んでいること

上記の3つの入力データを想定する

```cpp
int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<int>> g;

  rep(i, m) {
    int a, b;
    cin >> a >> b;

    g[a].push_back(b);
    g[b].push_back(a); // 無効グラフの場合
  }
}
```

## 参考
- [DFS（深さ優先探索）超入門！〜グラフ・アルゴリズムの世界への入り口〜【前編】](https://qiita.com/drken/items/4a7869c5e304883f539b)