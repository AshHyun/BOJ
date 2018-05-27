lst = list(map(int, input().split(' ')))
S = T = 0
for k in lst:
    S += k
lst = list(map(int, input().split(' ')))
for k in lst:
    T += k
print(max(S, T))