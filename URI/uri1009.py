class Main:
    def __init__(self):
        self.name = input()
        self.a = float(input())
        self.b = float(input())

    def calculation(self):
        return self.a + self.b * 0.15

    def output(self):
        print("TOTAL = R$ %0.2f" % self.calculation())

if __name__ == '__main__':
    obj = Main()
    obj.output()
