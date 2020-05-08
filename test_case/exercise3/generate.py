#coding: utf-8

import random
import sys

def main():

    if(len(sys.argv) < 3):
        print("USAGE: python generate.py [file name] [nmax]")
        exit()
    
    fname = sys.argv[1]
    nmax = int(sys.argv[2])
    query = ["top" for i in range(nmax)]

    sz = 0
    for i in range(nmax):
        q = int(random.uniform(0, 100))
        if(q % 2 == 0 or sz == 0):
            query[i] = "push " + str(int(random.uniform(1,100)))
            sz += 1
        elif(q % 3 == 0):
            sz -= 1
            query[i] = "pop"

    f = open(fname, 'w')
    f.write(str(nmax) + "\n")
    for q in query:
        f.write(q + "\n")
    f.close()

if __name__ == "__main__":
    main()