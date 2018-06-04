for k in range(int(input())):
    s = input()
    if s == 'P=NP':
        print ('skipped')
    else:
        lst = list(map(int, s.split('+')))
        print(lst[0] + lst[1])