N = int(input())
for k in range(N):
    lst = list(input().split(' '))
    for i in range(2, len(lst)):
        print(lst[i], end = ' ')
    print(lst[0] + ' ' + lst[1])