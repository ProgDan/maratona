names = ["Rudolph", "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen"]

arr = list(map(int, input().split()))
sum = 0

for i in arr:
	sum += i

print(names[sum%9])