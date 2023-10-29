# STL機能
競技プログラミングやアルゴリズムの実装に使用できるC++標準ライブラリ

## set
ユニークな要素を格納できるデータ構造。


| プログラム | 説明 |
| --- | --- |
| a.insert(x) | 集合 a に要素 x を追加する。但し、既に x が集合 a にある場合は追加しない。（multiset の場合、既に要素が 1 個以上あっても追加する。） |
| a.erase(x) | 集合 a から要素 x を削除する。（multiset の場合、要素 x をすべて削除する。） |
| a.erase(y) | 集合 a からイテレーター y の要素を削除する。（この場合、multiset の場合でも 1 個だけ消すことができる。）
| a.lower_bound(x) | 集合 a の中で x 以上である最小の要素を指すイテレーターを返す。 |
| a.clear() | 集合 a を空にする。 |


```cpp
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
```

## pair
2つの異なる型を一つの変数で持つことができる