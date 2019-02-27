class Main:
    def __init__(self):
        self.n = int(input())
        self.i = 3600

    def output(self):
        print("{h}:{m}:{s}".format(h=self.n//3600, m=(self.n % 3600) // 60, s=(self.n % 3600) % 60))


if __name__ == '__main__':
    obj = Main()
    obj.output()
