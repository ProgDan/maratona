/*
+------------------+
|Daniel Arndt Alves|
|     URI 2761     |
+------------------+
Entrada e Sa�da de V�rios Tipos
*/
import java.util.Scanner;
import java.util.Locale;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(new Locale("en", "US"));
		Scanner sc = new Scanner(System.in);
		
		//Crie uma vari�vel inteira;
		int a = Integer.parseInt(sc.next());
		//Crie uma vari�vel real de simples precis�o;
		float b = Float.parseFloat(sc.next());
		//Crie uma vari�vel que armazene um caracter;
		char c = sc.next().charAt(0);
		//Crie uma vari�vel que armazene uma frase de no m�ximo 50 caracteres;
		String[] d = new String[50];
		String input = sc.nextLine();
		d = input.split("");
		String sd=""; 
		for(int i=1 ; i<d.length; i++) sd+=d[i];
		//Leia todas as vari�veis na ordem da forma criada;
		
		//Imprima todas as vari�veis como foram lidas;
		System.out.printf("%d%.6f%c%s\n",a,b,c,sd);
		//Imprima as vari�veis, separando-as por uma tabula��o (8 espa�os), na ordem que foram lidas;
		System.out.printf("%d\t%.6f\t%c\t%s\n",a,b,c,sd);
		//Imprima as vari�veis com exatos 10 espa�os.
		System.out.printf("%10d%10.6f%10c%10s\n",a,b,c,sd);
		
		sc.close();
	}
}