i = 1
while True:
    N = int(input())
    if N == -1:
        break
    print("Experiment %d: %d full cycle(s)" %(i, N//2))
    i += 1