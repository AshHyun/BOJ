a, d, k = map(int, input().split(' '))

if (k - a)%d == 0:
    if (k-a)/d < 0:
        print('X')
    else:
        print(int((k-a)/d) + 1)
else:
    print('X')