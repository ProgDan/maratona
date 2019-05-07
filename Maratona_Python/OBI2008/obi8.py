#!/usr/bin/python
#coding: utf-8

N, P = map(int,input().split())
convidados = 0

for i in range(N):
    X, Y = map(int,input().split())
    if(X + Y >= P):
        convidados = convidados + 1

print(convidados)
