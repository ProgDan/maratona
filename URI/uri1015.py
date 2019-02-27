import math

class Main:
    def __init__(self):
        self.a = []
        self.b = []
        self.a = input().split()
        self.b = input().split()

    def distance(self):
        return math.sqrt((float(self.b[0]) - float(self.a[0])) ** 2 + (float(self.b[1]) - float(self.a[1])) ** 2)

    def output(self):
        print("%0.4f" % self.distance())


if __name__ == '__main__':
    obj = Main()
    obj.output()
