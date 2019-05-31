// R. Anido
// Copa - OBI2018

import java.util.Scanner;
import java.util.Arrays;

public class copa_java {
    
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);

	int a = in.nextInt();
	int b = in.nextInt();

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
