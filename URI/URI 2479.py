good = 0
list_names = []

N = int(input())
for i in range(N):
    ch, name = input().split()
    list_names.append(name)
    if ch == "+":
        good += 1

list_names.sort()

for name in list_names:
    print(name)
print("Se comportaram: %d | Nao se comportaram: %d" %(good, N-good))