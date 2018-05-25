triple = list()
a = 1
while a*(a+1)/2 < 1000:
    triple.append(int(a*(a+1)/2))
    a += 1
for tc in range(int(input())):
    N = int(input())
    find = False
    for first in range(len(triple)):
        for second in range(first, len(triple)):
            for third in range(second, len(triple)):
                if triple[first] + triple[second] + triple[third] == N and not find:
                    print(1)
                    find = True
    if not find:
        print(0)