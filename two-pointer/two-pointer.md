# しゃくとり法(two-pointer)
しゃくとり法についてまとめる

## 使用場面

条件を満たすような区間を求める問題に適用できる
>長さ（a1, a2, a3, ..., an）の数列において
「条件」を満たす区間 (連続する部分列) のうち、最小の長さを求めよ
「条件」を満たす区間 (連続する部分列) のうち、最大の長さを求めよ
「条件」を満たす区間 (連続する部分列) を数え上げよ
のような問題

## 使用条件
以下のいずれかの構造になっている場合に使用できる
> 1. 区間 [left, right) が「条件」を満たすなら、それに含まれる区間も「条件」を満たす
> 2. 区間 [left, right) が「条件」を満たすなら、それを含む区間も「条件」を満たす

## 問題例
- [3Sum - LeetCode](https://leetcode.com/problems/3sum/)
- [AOJ Course The Number of Windows - AOJ](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_C&lang=jp)