L = []
for i in range(10):
    name = input()
    if i==2 or i==6 or i==8:
        L.append(name)

for name in L:
    print(name)