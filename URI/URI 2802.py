def factorial(n):
    if n == 0:
        return 1
    ans = 1
    for i in range(1, n+1):
        ans *= i
    return ans

def binomial_coefficient(n, k):
    if k > n:
        return 0
    if k == n:
        return 1
    if k == 1:
        return n
    if k == 0:
        return 1

    return factorial(n) / (factorial(k) * factorial(n-k))

    
N = int(input())
ans = 0
for k in range(5):
    ans += binomial_coefficient(N-1, k)
print(int(ans))