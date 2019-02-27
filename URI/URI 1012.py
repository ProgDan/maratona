a,b,c = map(float, input().split())

TRIANGULO = .5*a*c
CIRCULO = 3.14159*c*c
TRAPEZIO = .5*(a+b)*c
QUADRADO = b*b
RETANGULO = a*b

print("TRIANGULO: %.3f" % TRIANGULO)
print("CIRCULO: %.3f" % CIRCULO)
print("TRAPEZIO: %.3f" % TRAPEZIO)
print("QUADRADO: %.3f" % QUADRADO)
print("RETANGULO: %.3f" % RETANGULO)
