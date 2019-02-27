reverese_map = {0:"GQaku", 1:"ISblv", 2:"EOYcmw", 3:"FPZdnx", 4:"JTeoy", 5:"DNXfpz", 6:"AKUgq", 7:"CMWhr", 8:"BLVis", 9:"HRjt"}

working_map = {}
for i in reverese_map:
    for j in reverese_map[i]:
        working_map[j] = i

N = int(input())

for i in range(N):
    line = input()
    size = 0
    for ch in line:
        if ch != ' ':
            print(working_map[ch], end="")
            size += 1
            if size == 12:
                break
    print()