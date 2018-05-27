N, K = map(int, input().split(' '))
lst = list(map(int, input().split(' ')))
s = 0
for k in lst:
    s += int(k/2) + (k % 2)
if s >= N:
    print('YES')
else:
    print('NO')