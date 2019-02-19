#!/usr/bin/python
#coding: utf-8

# lê a entrada
P = int(input())
D1 = int(input())
D2 = int(input())

# calcula e escreve o resultado
if(D1+D2)%2 == P:
    print(0)
else:
	print(1)
