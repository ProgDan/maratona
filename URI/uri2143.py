class Main:
    def __init__(self):
        while True:
            self.t = int(input())
            if self.t == 0:
                break
            else:
                self.againCall()

    def againCall(self):
        for i in range(0, self.t):
            self.n = int(input())
            if self.n % 2 == 0:
                print(2 * self.n - 2)
            else:
                print(2 * self.n - 1)

if __name__ == '__main__':
    obj = Main()
