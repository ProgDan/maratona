from math import floor, ceil

while True:
    N = float(input())
    if N == 0:
        break

    brasil = floor(N / 90.0)
    germany = ceil(7 * N / 90.0)

    print("Brasil %d x Alemanha %d" %(brasil, germany))