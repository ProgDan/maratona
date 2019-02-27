class Main:
    def __init__(self):
        self.a = int(input())
        self.b = float(input())

    def output(self):
        print("%0.3f km/l" % (self.a / self.b))


if __name__ == '__main__':
    obj = Main()
    obj.output()
