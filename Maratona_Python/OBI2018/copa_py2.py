#!/usr/bin/env python

# campeonato
# obi2018 - Fase 2

a = int(input())
b = int(input())

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
