#include <stdio.h>

int main ()
{
	double A,B,C,Triangulo,Circulo,Trapezio,Quadrado,Retangulo;
	scanf ("%lf",&A);
	scanf ("%lf",&B);
	scanf ("%lf",&C);
	Triangulo=(A*C)/2;
	Circulo=(C*C)*3.14159;
	Trapezio=((A+B)*C)/2;
	Quadrado=B*B;
	Retangulo=A*B;
	printf ("TRIANGULO: %.3lf\n",Triangulo);
	printf ("CIRCULO: %.3lf\n",Circulo);
	printf ("TRAPEZIO: %.3lf\n",Trapezio);
	printf ("QUADRADO: %.3lf\n",Quadrado);
	printf ("RETANGULO: %.3lf\n",Retangulo);
	
	return 0;
}