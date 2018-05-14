num = input()
lst = num.split(" ")
a = lst[0]
b = lst[1]

sum = 0
asum = 0
bsum = 0
for k in range(0, len(a)):
    asum += int(a[k])
for i in range(0, len(b)):
    bsum += int(b[i])
        
print(asum * bsum)
