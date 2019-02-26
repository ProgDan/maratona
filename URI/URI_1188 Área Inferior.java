/*
+--------------------+
| Daniel Arndt Alves |
|        IFTM        |
|      URI 1188      |
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
		int L, C;
		char T = sc.next().charAt(0);
		double SOMA=0.0, MEDIA=0.0;
		double[][] MATRIX = new double[12][12];

		for(int l=0; l<12; l++)
			for(int c=0; c<12; c++)
				MATRIX[l][c] = sc.nextDouble();

		 for(L=7 ; L<=11 ; L++)
			 for(C=11-L+1 ; C<=L-1 ; C++){
				SOMA+=MATRIX[L][C];
				//if (MATRIX[L][C] != 0)
					//MEDIA++;
			 }
		if (T == 'S')
			System.out.printf("%.1f\n",SOMA);
		
		if (T == 'M'){
			MEDIA = SOMA / ((144-12-12)/4);
			System.out.printf("%.1f\n",MEDIA);
		}

		sc.close();
	}
}


