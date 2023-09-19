# coding-interview environment
コーディング試験のためのc++環境

## 使用方法

### Dev Containersのインストール
VSCodeの拡張機能「[DevContainers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)」をインストールする。

### コンテナ立ち上げ
`command + Shift + P`でコマンドパレットを開き、`Reopen in Container`を選択

`Dockerfile`からイメージを作成してコンテナ起動するため、`From Dockerfile`を選択

### プログラム実行
`main.cpp`を編集して`make run`コマンドを実行することで標準出力に出力される