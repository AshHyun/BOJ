ans = ['1', '2', '3', '4', '5', '1', '2', '3', '4', '5']
for k in range(int(input())):
    isfail = True
    lst = input().split(' ')

    for i in range(len(lst)):
        if lst[i] != ans[i]:
            isfail = False
    if isfail:
        print(k+1)