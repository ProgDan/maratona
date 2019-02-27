class Main:
    def __init__(self):
        self.a = int(input())
        self.b = int(input())

    def output(self):
        print("PROD = {multi}".format(multi= self.a * self.b))

if __name__ == '__main__':
    obj = Main()
    obj.output()
