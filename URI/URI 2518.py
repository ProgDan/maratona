from math import sqrt

while True:
    try:
        N = float(input())
        H, C, L = map(float, input().split())
        area = (N * sqrt(H**2 + C**2) * L) / (100 * 100)
        print("%0.4f" %(area))

    except EOFError:
        break
    