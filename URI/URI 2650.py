N, W = map(int, input().split())
for i in range(N):
    desc = input().split()
    if int(desc[-1]) > W:
        print(" ".join(desc[0:-1]))