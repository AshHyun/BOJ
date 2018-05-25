tc = int(input())

for k in range(tc):
    alp = [False]*26
    s = input()
    for i in range(len(s)):
        alp[ord(s[i]) - ord('A')] = True
    S = 0
    for i in range(len(alp)):
        if not alp[i]:
            S += i+65
    print(S)