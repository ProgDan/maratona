// Capsulas - OBI2018 - Fase 2

import java.util.Scanner;

public class capsulas_java {
    public static final int MAX_DIAS = 100000000;

    public static int fortuna(int dia, int[] ciclos) {
	int ret = 0;
	for (int i=0; i<ciclos.length; i++)
	    ret += (dia/ciclos[i]);
	return ret;
    }

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	int lo,hi,mid;

	int N = in.nextInt();
	int F = in.nextInt();
	int[] ciclos = new int[N];

	for (int i = 0; i < N; i++)
	    ciclos[i] = in.nextInt();


	lo = 1;
	hi = MAX_DIAS;

	// busca binaria
	while ( lo < hi ){
	    mid = lo+(hi-lo)/2;
	    if ( fortuna(mid, ciclos ) < F ) lo = mid+1;
	    else hi = mid;    
	}
  
	// lo = hi = resposta
	System.out.println(lo);
    }
}
