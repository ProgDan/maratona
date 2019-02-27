from math import ceil
C = int(input())
for i in range(C):
    N, M = map(float, input().split())
    print(ceil(N/M))