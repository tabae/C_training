#coding: utf-8

import random

fname = "input.txt"
nmax = 10000
hoge = ["MP", "LG", "GU", "BB", "DX"]

def main():
    id = [hoge[int(random.uniform(0, 4))] + str(int(random.uniform(100, 999))) + str(i) for i in range(nmax)]
    mass = [str(random.uniform(1, 100)) for i in range(nmax)]
    pos = [[str(random.uniform(0, 100) + 100*i) for i in range(nmax)] for j in range(3)]

    f = open(fname, 'w')
    for i in range(nmax):
        f.write(id[i] + " " + mass[i] + " " + pos[0][i] + " " + pos[1][i] + " " + pos[2][i] +"\n")
    f.close()

if __name__ == "__main__":
    main()