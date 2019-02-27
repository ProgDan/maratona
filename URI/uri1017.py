class Main:
    def __init__(self):
        self.a = int(input())
        self.b = int(input())

    def output(self):
        print("%0.3f" % ((self.a * self.b) / 12))


if __name__ == '__main__':
    obj = Main()
    obj.output()
