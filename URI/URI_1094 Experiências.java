/*
+--------------------+
| Daniel Arndt Alves |
|        IFTM        |
|      URI 1094      |
+--------------------+
*/
import java.io.IOException;import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args)  throws IOException {
		Scanner sc = new Scanner(System.in);
		sc.useLocale(Locale.ENGLISH);
		Locale.setDefault(new Locale("en", "US"));
		
		int n, conta=0, quantia,
		       somaC=0, somaR=0, somaS=0;
		double total, perC, perR, perS;
		
		n = sc.nextInt();

		while (conta < n){
			quantia = sc.nextInt();
			String tipo = sc.next();
			if (tipo.equals("C")){
				somaC = somaC + quantia;
			}
			else if (tipo.equals("R")){
				somaR = somaR + quantia;
			}
			else if (tipo.equals("S")){
				somaS = somaS + quantia;
			}
			conta = conta + 1;
		}
		
		total = somaC + somaR + somaS;
		perC = somaC * 100 / total;
		perR = somaR * 100 / total;
		perS = somaS * 100 / total;
		
		System.out.printf("Total: %.0f cobaias\n",total);
		System.out.printf("Total de coelhos: %d\n",somaC);
		System.out.printf("Total de ratos: %d\n",somaR);
		System.out.printf("Total de sapos: %d\n",somaS);
		System.out.printf("Percentual de coelhos: %.2f %%\n",perC);
		System.out.printf("Percentual de ratos: %.2f %%\n",perR);
		System.out.printf("Percentual de sapos: %.2f %%\n",perS);
		
		sc.close();
	}
}