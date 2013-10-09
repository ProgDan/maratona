package OBI2000;

import java.util.Scanner;

/**
 * Solução para o problema "Bit" da OBI2000
 * @author progdan
 */
public class BIT {
    public static void main(String[] args) {
        Scanner ent = new Scanner(System.in);
        int n = 1;
        while (true){
            // lê o conjunto de teste V
            int V;
            V = ent.nextInt();
            if (V == 0) break;

            // Encontra a solução
            int L = 0,  // Notas de B$1
                K = 0,  // Notas de B$5
                J = 0,  // Notas de B$10
                I = 0;  // Notas de B$50

            I = V / 50;
            V %= 50;
            J = V / 10;
            V %= 10;
            K = V / 5;
            V %= 5;
            L = V;

            // Exibe a Solução
            System.out.println("Teste " + n++);
            System.out.println(I + " " + J + " " + K + " " + L);
            System.out.println();            
        }
    }    
}
