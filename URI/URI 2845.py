N = int(input())
L = list(map(int, input().split()))
L.sort()
print(L[-1]+1)