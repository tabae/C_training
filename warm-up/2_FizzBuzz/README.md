# Warming Up 2: FizzBuzz

## Problem

FizzBuzzを知っていますか？FizzBuzzは英語圏で長距離ドライブ中や飲み会の時に行われる言葉遊びです．

まず，最初のプレイヤーが 「1」 と発言します．次のプレイヤーは前のプレイヤーが言った数字に+1した数を発言していきます．ただし，その数字が3で割り切れる場合は`Fizz`，5で割り切れる場合は`Buzz`，3と5の両方で割り切れる場合は`FizzBuzz`と発言します．

具体的には，次のようにゲームは進行します．
- 1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, FizzBuzz, 31, 32, Fizz, 34, Buzz, Fizz, ...

さて，今回は入力 N をコマンドライン引数として受け取り，1ターン目からNターン目まで，プレイヤーが間違えなかった場合の発言を表示してください．

Do you know "FizzBuzz"? Fizz buzz is a group word game for children to teach them about division. Players take turns to count incrementally, replacing any number divisible by three with the word `Fizz`, and any number divisible by five with the word `Buzz`. 

For example, a typical round of fizz buzz would start as follows:

- 1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, FizzBuzz, 31, 32, Fizz, 34, Buzz, Fizz, ...

Now, the input N is given as a command line argument. Show the correct number/word from the turn 1 to the turn N.

## Sample

### Execution where N=16
```
$ ./a.out 16
```

### Expected Output
```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
```

## An example of implementation
./example.c

## References
- https://ja.wikipedia.org/wiki/Fizz_Buzz
- https://en.wikipedia.org/wiki/Fizz_buzz