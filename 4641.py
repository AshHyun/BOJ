while(True):
    s = input()
    if(s == '-1'):
        break
    lst = s.split(' ')
    for k in range(len(lst)):
        lst[k] = int(lst[k])
    lst.pop()
    lst.sort()

    ctr = 0
    for k in range(len(lst)):
        try:
            lst.index(lst[k]*2)
            ctr += 1
        except ValueError:
            continue
    print(ctr)