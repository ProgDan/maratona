class Main:
    def __init__(self):
        self.a = float(input())
        self.b = float(input())

    def average(self):
        return (self.a * 3.5 + self.b * 7.5) / 11.0

    def output(self):
        print("MEDIA = %0.5f" % self.average())

if __name__ == '__main__':
    obj = Main()
    obj.output()
