// R. Anido
// Xadrez - OBI2018

import java.util.Scanner;

public class xadrez {
    
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);

	int l = in.nextInt();
	int c = in.nextInt();

	// calcula e escreve a resposta
	if ( (l+c) % 2 == 0)
	    System.out.println(1);
	else
	    System.out.println(0);
    }
}
