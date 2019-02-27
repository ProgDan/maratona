class Main:
    def __init__(self):
        self.a = int(input())
        self.b = int(input())

    def add(self):
        return self.a + self.b

    def output(self):
        print("X = %d" % self.add())

if __name__ == '__main__':
    obj = Main()

    obj.output()
