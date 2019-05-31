// R. Anido
// Campeonato - OBI2018

import java.util.Scanner;
import java.util.Arrays;

public class campeonato_java {
    
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);

	int a=0, b=0, x; //java exige que as variaveis a e b sejam inicializadas...
	for (int i=1; i<=16; i++) {
	    x = in.nextInt();
	    if (x == 1) 
		a = i;
	    if (x == 9) 
		b = i;
	}

	if (a > b) { // faz a ser o menor valor
	    int tmp = a;
	    a = b;
	    b = tmp;
	}
	if (a <= 8 && b > 8)
	    System.out.println("final");
	else if ((a <= 4 && b > 4) || (a <= 12 && b > 12))
	    System.out.println("semifinal");
	else if ((a % 2 == 1) && (b == a + 1))
	    System.out.println("oitavas");
	else
	    System.out.println("quartas");
    }
}
