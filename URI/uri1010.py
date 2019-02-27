class Main:
    def __init__(self):
        self.a, self.b, self.c = input().split()
        self.d, self.e, self.f = input().split()

    def output(self):
        print("VALOR A PAGAR: R$ %0.2f" % (int(self.b) * float(self.c) + int(self.e) * float(self.f)))


if __name__ == '__main__':
    obj = Main()
    obj.output()
