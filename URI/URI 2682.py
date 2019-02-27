from sys import stdin

a = -1
flag = False

for line in stdin:
	x = int(line)

	if x > a:
		a = x
	else:
		print(a + 1)
		flag = True
		break

if flag == False:
	print(a + 1)
