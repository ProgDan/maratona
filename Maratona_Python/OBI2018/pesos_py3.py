#!/usr/bin/env python3


n = int(input())
pesos = [int(c) for c in input().split()]

# usando sentinela
pesos = [0] + pesos
res = 'S'
for i in range(n):
    if (pesos[i+1] - pesos[i] > 8):
        res = 'N'
        break

print(res)
