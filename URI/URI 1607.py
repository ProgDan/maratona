N = int(input())

for i in range(N):
    s1, s2 = input().split()

    ans = 0
    for j in range(len(s1)):
        if s1[j] > s2[j]:
            ans += (ord(s2[j]) + 26 - ord(s1[j]))
        else:
            ans += (ord(s2[j]) - ord(s1[j]))
    print(ans)