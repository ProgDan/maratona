remaining_people = 0
remaining_jeep = 0

while True:
    line = input().split()

    if line[0] == "SALIDA":
        remaining_people += int(line[1])
        remaining_jeep += 1

    elif line[0] == "VUELTA":
        remaining_people -= int(line[1])
        remaining_jeep -= 1

    else :
        print(remaining_people)
        print(remaining_jeep)
        break