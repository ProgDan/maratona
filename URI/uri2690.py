class Main:
    def __init__(self):
        self.n = int(input())
        self.s = ""

    def change(self):
        self.con = 0
        for i in range(0, len(self.s)):
            if self.con == 12:
                break
            elif self.s[i] in ['a', 'k', 'u', 'G', 'Q']:
                print(0, end='')
                self.con += 1
            elif self.s[i] in ['b', 'l', 'v', 'I', 'S']:
                print(1, end='')
                self.con += 1
            elif self.s[i] in ['c', 'm', 'w', 'E', 'O', 'Y']:
                print(2, end='')
                self.con += 1
            elif self.s[i] in ['d', 'n', 'x', 'F', 'P', 'Z']:
                print(3, end='')
                self.con += 1
            elif self.s[i] in ['e', 'o', 'y', 'J', 'T']:
                print(4, end='')
                self.con += 1
            elif self.s[i] in ['f', 'p', 'z', 'D', 'N', 'X']:
                print(5, end='')
                self.con += 1
            elif self.s[i] in ['g', 'q', 'A', 'K', 'U']:
                print(6, end='')
                self.con += 1
            elif self.s[i] in ['h', 'r', 'C', 'M', 'W']:
                print(7, end='')
                self.con += 1
            elif self.s[i] in ['i', 's', 'B', 'L', 'V']:
                print(8, end='')
                self.con += 1
            elif self.s[i] in ['j', 't', 'H', 'R']:
                print(9, end='')
                self.con += 1
        print()

    def output(self):
        for self.i in range(0, self.n):
            self.s = input()
            self.change()


if __name__ == '__main__':
    obj = Main()
    obj.output()
