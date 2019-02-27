from math import log10

C = int(input())

for i in range(C):
    N, M = map(int, input().split())
    ans = int(M * log10(N) + 1)
    print(ans)

