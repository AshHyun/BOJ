N, M = map(int, input().split(' '))
helmet = list(map(int, input().split(' ')))
protect = list(map(int, input().split(' ')))

helmet.sort()
protect.sort()

print(helmet[N-1] + protect[M-1])