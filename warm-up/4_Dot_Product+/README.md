# Warming Up 4: Dot Product+

## Problem

長さNの2つのベクトルaとbが与えられます．内積を出力してください．ただし，**内積計算部は関数として実装すること．**

Two vectors a and b of length N are given. Print the dot product. **Note that the dot product calculation must be implemented as a function.**

## Input

./test_case/ 以下に，test_case{1..6}.txtが用意されている．それぞれのファイルに，次のような様式でベクトルaとbが記述されている．

Input files `./test_case/test_case{1..6}.txt` are prepared. In each file, vectors a and b are described in the following format.

```
N
a_1 a_2 a_3 ... a_N
b_1 b_2 b_3 ... b_N
```

ファイルから直接読み込んでも良いし，`cat testcase.txt | ./a.out` のようにして，標準入力から読み込んでも良い．

You can read them directly from the files, or you can read them from the standard input by typing as `cat testcase.txt | ./a.out`.

## Expected Output
test_case/expect{1..6}.txtがtest_case/test_case{1..6}.txtに対応している．
また，一括でチェックするためのシェルスクリプトも用意してある．
- test_file.sh : ファイル読み込み版
  - 使い方：`$ ./test_file.sh [実行ファイル名]`
  - ただし，入力ファイル名は第一コマンドライン引数として与えられる．
- test_stdin.sh :　標準入力読み込み版
  - 使い方：`$ ./test_stdin.sh [実行ファイル名]`

test_case/expect{1..6}.txt correspond to test_case/test_case{1..6}.txt.
In addition, shell scripts are prepared for batch checking.
- test_file.sh : reading from file version
  - Usage: `$ ./test_file.sh [executable file name]`
  - Note taht the input file name is given as the first command line argument.
- test_stdin.sh : reading from stdin version
  - Usage: `$ ./test_stdin.sh [executable file name]`


## Examples of Implementation
- read from file : ./example_file.c
- read from stdin : ./example_stdin.c