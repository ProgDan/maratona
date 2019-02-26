/*
+--------------------+
| Daniel Arndt Alves |
|        IFTM        |
|      URI 1035      |
+--------------------+
*/
import java.io.IOException;import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args)  throws IOException {
		Scanner sc = new Scanner(System.in);
		sc.useLocale(Locale.ENGLISH);
		Locale.setDefault(new Locale("en", "US"));
		
		int A, B, C, D;
		A = sc.nextInt();
		B = sc.nextInt();
		C = sc.nextInt();
		D = sc.nextInt();

		if ((B > C) && (D > A) && ((C+D) > (A+B)) && (C > 0) && (D > 0) && ((A%2)==0)){
			System.out.println("Valores aceitos");
		}
		else{
			System.out.println("Valores nao aceitos");	
		}

		sc.close();
	}
}