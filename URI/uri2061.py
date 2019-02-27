class Main:
    def __init__(self):
        self.n, self.m = input().split()
        self.n = int(self.n)
        for i in range(0, int(self.m)):
            self.s = input()
            if self.s in 'fechou':
                self.n += 1
            else:
                self.n -= 1

    def output(self):
        print(self.n)

if __name__ == '__main__':
    try:
        obj = Main()
        obj.output()
    except Exception as e:
        print("Exception is", e)
