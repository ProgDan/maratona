/*
+--------------------+
| Daniel Arndt Alves |
|      URI 1189      |
+--------------------+
*/
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		sc.useLocale(Locale.ENGLISH);
		Locale.setDefault(new Locale("en", "US"));
		
		//MATRIZ[LINHA][COLUNA]
		int L, C=5;
		char T = sc.next().charAt(0);
		double SOMA=0.0, MEDIA=0.0;
		double[][] MATRIX = new double[12][12];

		//-------MATRIX BEGIN-------------------
		for(int l=0; l<12; l++)
			for(int c=0; c<12; c++)
				MATRIX[l][c] = sc.nextDouble();
		//-------MATRIX END---------------------

		int p=0;
		int r=4;
		for(L=1 ; L<=10 ; L++){
			 
			if (L <= 5){
				for(C=0 ; C<=p ; C++)
					SOMA+=MATRIX[L][C];
				p++;
				 
			}
			else if (L>=6){
				for(C=0 ; C<=r ; C++)
					SOMA+=MATRIX[L][C];
				r--;
			}
		}
		MEDIA = SOMA/30.0; 
		if (T == 'S')
			System.out.printf("%.1f\n",SOMA);
		
		if (T == 'M')
			System.out.printf("%.1f\n",SOMA/MEDIA);

		sc.close();
	}
}

