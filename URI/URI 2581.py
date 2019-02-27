from sys import stdin

while True:
	line = stdin.readline()
	if line == '':
		break
	N = int(line)
	for i in range(N):
		line = stdin.readline()
		print("I am Toorg!")