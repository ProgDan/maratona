while True:
    try:
        L1 = input()
        L2 = input()

        if(L1.find(L2) == -1):
            print("Nao resistente")
        else:
            print("Resistente")
    except EOFError:
        break