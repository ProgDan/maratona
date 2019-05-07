#!/usr/bin/python
#coding: utf-8

N, S = map(int,input().split())
min_saldo = S

for i in range(N):
    x = int(input())
    S = S + x
    if(S < min_saldo):
        min_saldo = S

print(min_saldo)
