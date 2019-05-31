// R. Anido
// Album - OBI2018

import java.util.Scanner;

public class basquete {
    
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);

	int n = in.nextInt();
	int m = in.nextInt();
	Boolean[] ja_tem =  new Boolean[n];
	int x;
	
	// inicializa vetor
	for (int i = 0; i < n; i++)
	    ja_tem[i] = False;
	
	// marca figurinhas que ja tem
	for (int i = 0; i < m; i++) {
	    x = in.nextInt();
	    ja_tem[x] = True;
	}

	int conta = 0;
	// marca figurinhas que ja tem
	for (int i = 0; i < n; i++)
	    if (ja_tem[i])
		conta += 1;
	    
	// calcula e escreve a resposta
	System.out.println(n - conta)
    }
}
