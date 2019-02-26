/*
+--------------------+
| Daniel Arndt Alves |
|      URI 1165      |
+--------------------+
*/
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		sc.useLocale(Locale.ENGLISH);
		Locale.setDefault(new Locale("en", "US"));
		
		int n, x, testasoma=0;
		
		n = sc.nextInt();
		while (n > 0) {

			x = sc.nextInt();
			for (int aux = 2; aux < x; aux++){
				if (x % aux == 0){
					testasoma+=aux;
				}
			}
			if (testasoma == 0){
				System.out.printf("%d eh primo\n",x);
			}
			else {
				System.out.printf("%d nao eh primo\n",x);
			}
			n = n - 1;
			testasoma = 0;
		}
		sc.close();
	}
}