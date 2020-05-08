#coding: utf-8

import random

fname = "test.txt"
nmax = 100

def main():
    id = ["City" + str(int(random.uniform(100, 999))) + str(i) for i in range(nmax)]
    lati = [str(random.uniform(50, 80)) for i in range(nmax)]
    long = [str(random.uniform(120, 140)) for i in range(nmax)]

    mix = 30
    for i in range(mix):
        ind1 = int(random.uniform(0, nmax-1))
        ind2 = int(random.uniform(0, nmax-1))
        if(long[ind1] != long[ind2]):
            lati[ind1] = lati[ind2]

    f = open(fname, 'w')
    for i in range(nmax):
        f.write(id[i] + " " + lati[i] + " " + long[i] + "\n")
    f.close()

if __name__ == "__main__":
    main()