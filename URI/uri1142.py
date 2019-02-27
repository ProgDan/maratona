class Main:
    def __init__(self):
        self.n = int(input())

    def output(self):
        for i in range(0, self.n * 4 - 1, 4):
            print("{f} {s} {t} PUM".format(f=i+1, s=i+2, t=i+3))


if __name__ == '__main__':
    obj = Main()
    obj.output()
