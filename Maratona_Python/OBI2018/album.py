#!/usr/bin/env python3

# album de figurinhas

n = int(input())
m = int(input())

# usando um conjunto
album = set()
for i in range(m):
    x = int(input())
    album.add(x)

# escreve a resposta
print(n - len(album))


