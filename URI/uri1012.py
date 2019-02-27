class Main:
    def __init__(self):
        self.pi = 3.14159
        self.a, self.b, self.c = input().split()

    def areaTriangle(self):
        return 0.5 * float(self.a) * float(self.c)

    def areaCircule(self):
        return self.pi * float(self.c) ** 2

    def areaTrapezium(self):
        return 0.5 * (float(self.a) + float(self.b)) * float(self.c)

    def areaSquare(self):
        return float(self.b) ** 2

    def areaRectangle(self):
        return  float(self.a) * float(self.b)

    def output(self):
        print("TRIANGULO: %0.3f" % self.areaTriangle())
        print("CIRCULO: %0.3f" % self.areaCircule())
        print("TRAPEZIO: %0.3f" % self.areaTrapezium())
        print("QUADRADO: %0.3f" % self.areaSquare())
        print("RETANGULO: %0.3f" % self.areaRectangle())


if __name__ == '__main__':
    obj = Main()
    obj.output()
