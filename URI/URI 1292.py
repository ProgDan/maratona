from sys import stdin
from math import sin
from math import pi

sin_180_over_sin_63 = sin(108*pi/180) / sin(63*pi/180)

for line in stdin:
	x = float(line)
	ans = x * sin_180_over_sin_63
	print("%.10f" %ans)
