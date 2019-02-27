N = int(input())
if N==1:
    print("1")
    exit()
if N==2:
    print("1 1")
    exit()

arr = [1, 1]
for i in range(N-2):
    arr.append(arr[-1]+arr[-2])

for i in range(len(arr)-1, 0, -1):
    print(arr[i], end = " ")
print(arr[0])