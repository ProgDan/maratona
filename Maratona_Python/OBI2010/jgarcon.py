#!/usr/bin/python
#coding: utf-8

N = int(input())
copos = 0

for i in range(N):
    L, C = map(int,input().split())
    if(L > C):
        copos = copos + C

print(copos)
