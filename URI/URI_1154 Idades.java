/*
+--------------------+
| Daniel Arndt Alves |
|        IFTM        |
|      URI 1154      |
+--------------------+
*/
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double idade, soma=0, conta=0;
		double media;

		idade = sc.nextDouble();
		while (idade >= 0){
			soma += idade;
			idade = sc.nextDouble();
			conta++;
		}
		media = soma / conta;
		System.out.printf("%.2f\n",media);
		sc.close();
	}
}