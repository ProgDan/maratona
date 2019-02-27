class Main:
    def __init__(self, ss, nn):
        self.s = ss
        self.n = nn
        self.con = 0
        self.read = 0

    def readString(self):
        self.read = 0
        for i in range(0, len(self.s)):
            if self.s[i] == 'W':
                if self.read:
                    self.con += 1
                    self.read = 0
                self.con += 1

            else:
                self.read += 1
                if self.read == self.n:
                    self.con += 1
                    self.read = 0
        if self.read:
            self.con += 1
            self.read = 0

    def output(self):
        self.readString()
        print(self.con)

if __name__ == '__main__':
    while True:
        try:
            s = input()
            n = int(input())
            obj = Main(s, n)
            obj.output()
        except EOFError:
            break
