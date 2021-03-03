## 方針

### [2021-02-15] ARC112 を踏まえて

全然分からん．解説を読んでも全く分からない．
抑，`Disjoint set union` って何です?(・ワ・)

以上から，

1. 取り敢えず基礎を学ぼう．初心者向けの記事などあるのでそれを参考に
1. 無理に D 問題とかに突っ込まない．突っ込んでも時間の無駄にしかならない

### 練習問題

- [ ] [第 1 問: ABC 086 A - Product (100 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-1-%E5%95%8F--abc-086-a---product-100-%E7%82%B9)

  - 簡単

- [ ] [第 2 問: ABC 081 A - Placing Marbles (100 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-2-%E5%95%8F--abc-081-a---placing-marbles-100-%E7%82%B9)

- [ ] [第 3 問: ABC 081 B - Shift Only (200 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-3-%E5%95%8F--abc-081-b---shift-only-200-%E7%82%B9)

- [ ] [第 4 問: ABC 087 B - Coins (200 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-4-%E5%95%8F--abc-087-b---coins-200-%E7%82%B9)

- [ ] [第 5 問: ABC 083 B - Some Sums (200 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-5-%E5%95%8F--abc-083-b---some-sums-200-%E7%82%B9)

- [ ] [第 6 問: ABC 088 B - Card Game for Two (200 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-6-%E5%95%8F--abc-088-b---card-game-for-two-200-%E7%82%B9)

- [ ] [第 7 問: ABC 085 B - Kagami Mochi (200 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-7-%E5%95%8F--abc-085-b---kagami-mochi-200-%E7%82%B9)

- [ ] [第 8 問: ABC 085 C - Otoshidama (300 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-8-%E5%95%8F--abc-085-c---otoshidama-300-%E7%82%B9)

- [ ] [第 9 問: ABC 049 C - Daydream (300 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-9-%E5%95%8F--abc-049-c---daydream-300-%E7%82%B9)

  - **DP** や **DFS** ， **BFS** で解く方法もあるらしい

    > 「後ろから解く」という発想は少し難しいかもしれませんが、何気によく出て来る考え方です。ただし今回後ろから芋づる式に解くことができたのはたまたまだと言えます。実際、前から解いても後ろから解いても「どこで切ったらいいかわからない」という問題設定を考えることもできます。そのような状況で有力な手法として動的計画法 (DP) と呼ばれる手法があります。この例題も DP によって前から解くことも可能です。なお DP までしなくても、前から深さ優先探索 (DFS) や幅優先探索 (BFS)、少し先まで見る Greedy などの解法によってゴリ押すこともできます。これらの別解法については、@259_Momone さんの以下の記事を参考にしていただければと思います:\
    > \
    > AtCoder に登録したら解くべき精選過去問 10 問を別解で解いてみた

  - 類題

    - [ ] AGC013A
      - 難しい
    - [ ] AGC011A
    - [ ] ABC059C
    - [ ] ABC072C

    > 【類題】 \
    >  \
    > AGC 013 A - Sorted Arrays 　(数列の端から順にできるだけ長い列を切り出す Greedy です) \
    > AGC 011 A - Airport Bus 　(同様に小さい方から順に切り出して行く Greedy です) \
    > ABC 059 C - Sequence 　(最初の a[0] を正か負かを決めると芋づる式に決まります) \
    > ABC 072 C - Together 　(X を決めると Greedy にすべて決まります)

- [x] [第 10 問: ABC 086 C - Traveling (300 点)](https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-10-%E5%95%8F--abc-086-c---traveling-300-%E7%82%B9)

  - 分からん
  - **パリティ** の問題
  - 類題

    - [x] ABC093C
      - 難しかった
      - 対称性に気を使おう
    - [x] AGC010A
    - [x] AGC020A
    - [x] ABC073C
      - `set` で簡略化可能

    > 【類題】\
    > \
    > ABC 093 C - Same Integers 　(今度は「不変量」に着目します)\
    > AGC 010 A - Addition 　(AGC ですが A 問題は 300 点前後であることが多いです、パリティのよい例題です)\
    > AGC 020 A - Move and Win 　(やはりパリティのよい例題です)\
    > ABC 073 C - Write and Erase 　(連想配列またはソートとの複合問題です)
