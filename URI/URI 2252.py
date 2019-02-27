c = 1

while True:
    try:
        L = []
        N = int(input())
        line = list(map(float, input().split()))
        for i in range(10):
            L.append((line[i], -i))
        L.sort()
        L.reverse()
        print("Caso %d:" %(c), end = " " )
        for i in range(N):
            print(-L[i][1], end = "")
        print()
        c += 1
    except EOFError:
        break