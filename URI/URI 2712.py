mapping = {"1":"MONDAY", "2":"MONDAY", "3":"TUESDAY", "4":"TUESDAY", "5":"WEDNESDAY", "6":"WEDNESDAY", "7":"THURSDAY", "8":"THURSDAY", "9":"FRIDAY", "0":"FRIDAY"}

N = int(input())
all_vehicles = []
for i in range(N):
    all_vehicles.append(input())

import re
for vehicle in all_vehicles:
    if len(vehicle) == 8 and re.match("[A-Z][A-Z][A-Z]-[0-9][0-9][0-9][0-9]", vehicle):
            print(mapping[vehicle[-1]])
    else:
        print("FAILURE")
