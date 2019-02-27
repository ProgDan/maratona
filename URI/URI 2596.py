def get_divisor_count(n):
    cnt = 1
    for i in range(2, n+1):
        power_i = 0
        while n % i == 0:
            n = n //i
            power_i += 1
        cnt *= (power_i + 1)
        if n == 1:
            break
    return cnt

list_cnt_numbers_with_even_divisors_upto_i = [-1]
cnt_numbers_with_even_divisors_upto_i = 0

for i in range(1, 1001):
    n_divisors = get_divisor_count(i)
    if n_divisors % 2 == 0:
        cnt_numbers_with_even_divisors_upto_i += 1
    list_cnt_numbers_with_even_divisors_upto_i.append(cnt_numbers_with_even_divisors_upto_i)

C = int(input())
for i in range(C):
    N = int(input())
    print(list_cnt_numbers_with_even_divisors_upto_i[N])

