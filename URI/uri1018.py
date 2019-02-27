class Main:
    def __init__(self):
        self.n = int(input())
        self.i = 100

    def output(self):
        print(self.n)

        while self.i > 0:
            if self.i == 25:
                self.i -= 5
            print("{s} nota(s) de R$ {t},00".format(s=self.n // self.i, t=self.i))
            self.n -= (self.n // self.i) * self.i
            self.i //= 2


if __name__ == '__main__':
    obj = Main()
    obj.output()
