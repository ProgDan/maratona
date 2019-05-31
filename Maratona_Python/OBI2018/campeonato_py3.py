#!/usr/bin/env python3

# campeonato
# obi2018 - Fase 2

chave = [int(i) for i in input().split()]

for i in range(len(chave)):
    if chave[i] == 1:
        a = i+1
    if chave[i] == 9:
        b = i+1

if a > b: # faz a ser o menor
    a,b = b,a

if a <= 8 and b > 8:
    print('final')
elif (a <= 4 and b > 4) or (a <= 12 and b > 12):
    print('semifinal')
elif (a % 2 == 1) and (b == a + 1):
    print('oitavas')
else:
    print('quartas')

