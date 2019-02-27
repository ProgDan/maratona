
map = {"esquerda": "ingles", "direita": "frances", "nenhuma": "portugues", "as duas": "caiu"}

while True:
    try:
        line = input()
        print(map[line])
    except EOFError:
        break
    