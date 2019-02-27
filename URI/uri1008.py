class Main:
    def __init__(self):
        self.li = []
        for i in range(0, 2):
            self.li.append(int(input()))
        self.salary = float(input())

    def totalSalary(self):
        return self.li[1] * self.salary

    def output(self):
        print("NUMBER = {num}".format(num=self.li[0]))
        print("SALARY = U$ %0.2f" % self.totalSalary())

if __name__ == '__main__':
    obj = Main()
    obj.output()
