from operator import itemgetter, attrgetter

for tc in range(int(input())):
    lst = list()
    for k in range(int(input())):
        temp = input().split(' ')
        temp[0] = (int)(temp[0])
        lst.append(temp)

    lst = sorted(lst, key = itemgetter(0))
    print(lst[len(lst) - 1][1])
