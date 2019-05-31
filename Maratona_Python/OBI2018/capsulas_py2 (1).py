#!/usr/bin/env python2.7

# Guilherme A. Pinto, OBI-2018, capsulas

MAX_DIAS = 10**8

[N,F] = [int(c) for c in raw_input().split()]
ciclos = [int(c) for c in raw_input().split()]

def fortuna( dia ):
    ret = 0
    for c in ciclos:
        ret += (dia//c)
    return ret

lo = 1
hi = MAX_DIAS

# busca binaria
while ( lo < hi ):
    mid = lo+(hi-lo)//2
    if ( fortuna( mid ) < F ): lo = mid+1
    else: hi = mid

# lo = hi = resposta
print lo
