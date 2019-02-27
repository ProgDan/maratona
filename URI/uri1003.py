class Main:
    def __init__(self):
        self.a = int(input())
        self.b = int(input())

    def output(self):
        print("SOMA = {sum}".format(sum = self.a + self.b))

if __name__ == '__main__':
    obj = Main()
    obj.output()
