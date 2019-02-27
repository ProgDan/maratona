while True:
    try:
        N = input()
        ages = list(map(int, input().split()))
        ages.sort()
        size = len(ages)
        if size % 2 != 0:
            ages[size//2] = 0
        size = len(ages)
        sum_low = sum(ages[0:size//2])
        sum_high = sum(ages[size//2:])
        print(sum_high - sum_low)

    except EOFError:
        break
    