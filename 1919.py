alp1 = [0] * 26
alp2 = [0] * 26

s1 = input()
s2 = input()
for k in range(len(s1)):
    alp1[ord(s1[k]) - ord('a')] += 1
for k in range(len(s2)):
    alp2[ord(s2[k]) - ord('a')] += 1

S = 0
for k in range(26):
    S += abs(alp1[k] - alp2[k])
print(S)
