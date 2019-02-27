#include <stdio.h>

int main (){
	double NotaA, NotaB, Media;
	scanf ("%lf",&NotaA);
	scanf ("%lf",&NotaB);
	Media=((NotaA*3.5)+(NotaB*7.5))/11;
	printf ("MEDIA = %.5lf\n",Media);
	return 0;
}
