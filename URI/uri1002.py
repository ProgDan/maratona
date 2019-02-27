class Main:
    def __init__(self):
        self.pi = 3.14159
        self.r = float(input())

    def output(self):
        print("A=%0.4f" % (self.pi * self.r ** 2))

if __name__ == '__main__':
    obj = Main()
    obj.output()
