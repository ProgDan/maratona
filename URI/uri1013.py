class Main:
    def __init__(self):
        self.li = []
        self.li = input().split()

    def maxValue(self):
        return max(max(int(self.li[0]), int(self.li[1])), int(self.li[2]))

    def output(self):
        print("{mx} eh o maior".format(mx = self.maxValue()))


if __name__ == '__main__':
    obj = Main()
    obj.output()
