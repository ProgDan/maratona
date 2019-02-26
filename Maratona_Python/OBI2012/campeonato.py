#!/usr/bin/python
#coding: utf-8

CV, CE, CS, FV, FE, FS = map(int,input().split())

CP = 3 * CV + CE
FP = 3 * FV + FE

if ((CP > FP) or ((CP == FP) and (CS > FS))):
    res = "C"
elif ((CP < FP ) or ((CP == FP) and (CS < FS))):
    res = "F"
else:
    res = "="

print(res)
exit(0)
