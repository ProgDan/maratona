N = int(input())
A, B = input().split()
A, B = int(A), int(B)

if N >= A + B:
    print("Farei hoje!")
else:
    print("Deixa para amanha!")