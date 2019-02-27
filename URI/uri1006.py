class Main:
    def __init__(self):
        self.li = []
        for i in range(0, 3):
            self.li.append(float(input()))

    def average(self):
        return (self.li[0] * 2 + self.li[1] * 3 + self.li[2] * 5) / 10

    def output(self):
        print("MEDIA = %0.1f" % self.average())

if __name__ == '__main__':
    obj = Main()
    obj.output()