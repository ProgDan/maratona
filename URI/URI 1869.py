def decimal_to_base32(n):
    # char array to store base 32 number
    base32_number = ['0'] * 100

    # counter for array
    i = 0
    while (n != 0):
        temp = n % 32

        if (temp < 10):
            base32_number[i] = chr(temp + 48)
        else:
            base32_number[i] = chr(temp + 55)
        i += 1
        n = n // 32

    # printing number
    j = i - 1
    while j >= 0:
        print(base32_number[j], end="")
        j -= 1
    print()


while True:
    n = int(input())
    if n == 0:
        print(0)
        break
    else:
        decimal_to_base32(n)
