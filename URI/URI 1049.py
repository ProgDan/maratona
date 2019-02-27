s1 = input()
s2 = input()
s3 = input()

if s1 == "vertebrado":

    if s2 == "ave":

        if s3 == "carnivoro":
            print("aguia")
        else:
            print("pomba")

    else:
        if s3 == "onivoro":
            print("homem")
        else:
            print("vaca")


else:

    if s2 == "inseto":

        if s3 == "hematofago":
            print("pulga")
        else:
            print("lagarta")

    else:
        if s3 == "hematofago":
            print("sanguessuga")
        else:
            print("minhoca")
