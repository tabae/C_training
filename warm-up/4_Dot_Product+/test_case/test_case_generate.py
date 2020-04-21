#coding: utf-8

import random

vec_size = [5, 1, 100, 10**3, 200*100+1, 10**5]

def main():
    for i in range(len(vec_size)):

        a = [random.uniform(1, 100) for j in range(vec_size[i])]
        b = [random.uniform(1, 100) for j in range(vec_size[i])]
        
        f = open("test_case" + str(i+1) + ".txt", "w")
        f.write(str(vec_size[i]) + "\n")
        for aa in a:
            f.write(str(aa) + " ")
        f.write("\n")
        for bb in b:
            f.write(str(bb) + " ")
        ans = 0
        for j in range(vec_size[i]):
            ans += a[j] * b[j]

        f.close()

        f = open("expected" + str(i+1) + ".txt", "w")
        f.write(str(ans))
        f.close()

if __name__ == "__main__":
    main()