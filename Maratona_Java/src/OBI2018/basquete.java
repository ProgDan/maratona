// R. Anido
// Basquete - OBI2018

import java.util.Scanner;

public class basquete {
    
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);

	int d = in.nextInt();
	// calcula e escreve a resposta
	if (d <= 800)
	    System.out.println(1);
	else if (d > 800 && d <= 1400)
	    System.out.println(2);
	else
	    System.out.println(3);
    }
}
