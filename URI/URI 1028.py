import fractions
n = int(input())
for i in range (n):
    a, b = map(int, input().split())
    ans = fractions.gcd(a,b)
    print(ans)
