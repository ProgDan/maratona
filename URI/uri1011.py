class Main:
    def __init__(self):
        self.pi = 3.14159
        self.r = int(input())

    def volume(self):
        return (4 * self.pi * (self.r ** 3)) / 3.0

    def output(self):
        print("VOLUME = %0.3f" % self.volume())


if __name__ == '__main__':
    obj = Main()
    obj.output()
