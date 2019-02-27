ca, ba, pa = map(int, input().split())
cr, br, pr = map(int, input().split())

ans = (cr - ca) * (cr >= ca) + (br - ba) * (br >= ba) + (pr - pa) * (pr >= pa)
print(ans)