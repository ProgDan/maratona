class Main:
    def __init__(self):
        self.a = int(input())

    def output(self):
        print("{dis} minutos".format(dis=2 * self.a))


if __name__ == '__main__':
    obj = Main()
    obj.output()
