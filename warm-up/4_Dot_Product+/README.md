# Warming Up 4: Dot Product+

## Problem

長さNの2つのベクトルaとbが与えられます．内積を出力してください．ただし，**内積計算部は関数として実装すること．**

Two vectors a and b, which its length is N, are given. Print the dot product. **Note that the dot product calculation must be implemented as a function.**

## Input Files
6つの入力ファイルが用意されている．
- ./test_case/testcase1.txt
- ./test_case/testcase2.txt
- ./test_case/testcase3.txt
- ./test_case/testcase4.txt
- ./test_case/testcase5.txt
- ./test_case/testcase6.txt

### Format

それぞれのファイルに，次のような様式でベクトルaとbが記述されている．
```
N
a_1 a_2 a_3 ... a_N
b_1 b_2 b_3 ... b_N
```
ファイルから直接読み込んでも良いし，`cat testcase.txt | ./a.out` のようにして，標準入力から読み込んでも良い．


In each file, vectors a and b are described in the following format.
```
N
a_1 a_2 a_3 ... a_N
b_1 b_2 b_3 ... b_N
```
You can read them directly from the files, or you can read them from the standard input by typing as `cat testcase.txt | ./a.out`.

## Expected Output

- ./test_case/expected1.txt
- ./test_case/expected2.txt
- ./test_case/expected3.txt
- ./test_case/expected4.txt
- ./test_case/expected5.txt
- ./test_case/expected6.txt

### Batch Checking

一括でチェックするためのシェルスクリプトも用意してある．
- test_file.sh : ファイル読み込み版
  - 使い方：`$ ./test_file.sh [実行ファイル名]`
  - ただし，入力ファイル名は第一コマンドライン引数として与えられる．
- test_stdin.sh :　標準入力読み込み版
  - 使い方：`$ ./test_stdin.sh [実行ファイル名]`

Shell scripts for batch checking are prepared.
- test_file.sh : reading from file version
  - Usage: `$ ./test_file.sh [executable file name]`
  - Note taht the input file name is given as the first command line argument.
- test_stdin.sh : reading from stdin version
  - Usage: `$ ./test_stdin.sh [executable file name]`


## Examples of Implementation
- read from file: ./example_file.c
- read from stdin: ./example_stdin.c