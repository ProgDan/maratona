days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

d1, m1 = map(int, input().split())
d2, m2 = map(int, input().split())

ans = 0
for i in range(m1, m2):
    ans += days[i]

ans = ans - d1 + d2
print(ans)
