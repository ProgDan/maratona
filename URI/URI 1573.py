while(True):
	a, b, c = map(int, input().split())
	if a+b+c == 0:
		break
	print(int((a*b*c)**(1/3)))