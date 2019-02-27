class Main:
    def __init__(self):
        self.li = []
        for i in range(0, 4):
            self.li.append(int(input()))

    def difference(self):
        return self.li[0] * self.li[1] - self.li[2] * self.li[3]

    def output(self):
        print("DIFERENCA = {dif}".format(dif=self.difference()))

if __name__ == '__main__':
    obj = Main()
    obj.output()
