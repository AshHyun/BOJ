N = int(input())
lst = list()
for k in range(N):
    which = int(input())
    if(which == 0):
        lst.pop()
    else:
        lst.append(which)
S = 0
for k in range(len(lst)):
    S += lst[k]
print(S)