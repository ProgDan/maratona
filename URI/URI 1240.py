tc = int(input())

for i in range (0,tc):
    s1,s2 = input().split()

    print ("encaixa" if s1.endswith(s2) else "nao encaixa")
