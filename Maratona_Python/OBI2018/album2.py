#!/usr/bin/env python

# album de figurinhas


n = input()
m = input()

# usando uma lista
album = []
for i in range(m):
    x = input()
    if x not in album:
        album.append(x)

# escreve a resposta
print(n - len(album))
