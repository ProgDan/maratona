N = int(input())

for i in range(N):
    line = input()
    L = []
    for ch in line:
        if ch.isalpha():
            L.append(chr(ord(ch)+3))
        else:
            L.append(ch)
    L.reverse()
    for i in range(len(L)//2, len(L)):
        L[i] = chr(ord(L[i])-1)
    print("".join(L))