# coding-interview environment
競技プログラミングのためのc++環境と汎用プログラム集

## 各種リンク
- [入力](./docs/io.md)
- [文字列操作](./docs/string.md)
- [配列操作](./docs/array.md)
- [整数関連](./docs/integer.md)
- アルゴリズムとデータ構造
    - [動的計画法（dynamic-programming）](./ds-argorithms/dynamic-programming/dynamic-programming.md)
    - [しゃくとり法（two-pointer）](./ds-argorithms/two-pointer/two-pointer.md)
    - [二分探索](./ds-argorithms/binary-search/binary-search.md)
    - [グラフ](./ds-argorithms/graph/graph.md)
- [STL機能](./STL/stl.md)
- [環境構築](#環境構築)

## 環境構築

### Dev Containersのインストール
VSCodeの拡張機能「[DevContainers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)」をインストールする。

### コンテナ立ち上げ
`command + Shift + P`でコマンドパレットを開き、`Reopen in Container`を選択

`Dockerfile`からイメージを作成してコンテナ起動するため、`From Dockerfile`を選択

### プログラム実行
`main.cpp`を編集して`make run`コマンドを実行することで標準出力に出力される
