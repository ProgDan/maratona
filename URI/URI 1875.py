
C = int(input())

for i in range(C):
	n = int(input())

	blue = 0
	green = 0
	red = 0

	for j in range(n):
		x, y = input().split()

		if x == "G" and y == "R":
			green += 1
		elif x == "G" and y == "B":
			green += 2
		elif x == "R" and y == "B":
			red += 1
		elif x == "R" and y == "G":
			red += 2
		elif x == "B" and y == "G":
			blue += 1
		elif x == "B" and y == "R":
			blue += 2

	if green == red and red == blue:
		print("trempate")
	elif (green == red and green > blue) or (red == blue and red > green) or (blue == green and blue > red):
		print("empate")
	else:
		max_ = max(red, green, blue)
		if max_ == red:
			print("red")
		elif max_ == green:
			print("green")
		elif max_ == blue:
			print("blue")

