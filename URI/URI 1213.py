from sys import stdin

for line in stdin:
	divisor = int(line)
	dividend = 1
	ans = 1

	while (dividend % divisor) != 0:
		dividend = (dividend * 10 + 1) % divisor
		ans += 1

	print(ans)
