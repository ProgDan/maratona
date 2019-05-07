#!/usr/bin/python
#coding: utf-8

list = map(int,input().split())
num = 0

for i in list:
    if(i > num):
        num = i

print(num)
