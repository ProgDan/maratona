// r. anido
// problema cores, OBI2017

import java.util.Scanner;

public class cores {
    public static int n,m;
    public static boolean caminhos[][];       // vamos manter o grafo dos caminhos em uma matriz, porque é simples e o
                                              // número de castelos é pequeno (<=100)
    public static int cores[];                // cor de cada castelo
    public static boolean visitado[];      // usado para encontrar caminho entre castelo x e castelo y
    public static int caminho[];           // contém castelos no caminho entre castelo x e castelo y
    public static int i_caminho;              // número de castelos presentes no vetor caminho

    
    // procedimento recursivo para colorir castelos de i a j com cor
    public static void pinta(int i, int j, int cor) {
	int k;
	
	if (i==j) { // chegou ao castelo j, vamos pintar todos no caminho até aqui com cor
	    for (k=0; k<i_caminho; k++) {
		cores[caminho[k]]=cor;
	    }
	    cores[i]=cor;
	    return;
	}
	visitado[i]=true;                 // marca como visitado, não visita mais nesta ordem de pintura
	caminho[i_caminho++]=i;        // coloca no caminho corrente
	for (k=0; k<n; k++) {
	    if (caminhos[i][k] && !visitado[k])
		pinta(k,j,cor);
	}
	i_caminho--;                   // retira castelo i do caminho, não chegou ao castelo j usando i
    }
    
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in); 
	n = in.nextInt();
	m = in.nextInt();
	int i,j,x,y,c;

	caminhos = new boolean[n][n];
	cores = new int[n];
	caminho = new int[n];
	visitado = new boolean[n];

	// inicializa cores dos castelos
	for (i=0; i<n; i++) 
	    cores[i]=0;
	// inicializa matriz de conexões
	for (i=0; i<n; i++) 
	    for (j=0; j<n; j++) 
		caminhos[i][j]=false;
	// le conexoes
	for (i=0; i<n-1; i++) {
	    x = in.nextInt();
	    y = in.nextInt();
	    caminhos[x-1][y-1]=true;
	    caminhos[y-1][x-1]=true;
	}
	// lê as ordens de colorir
	for (i=0; i<m; i++) {
	    x = in.nextInt();
	    y = in.nextInt();
	    c = in.nextInt();
	    // cumpre a ordem (colore os castelos de x a y)
	    for (j=0; j<n; j++) 
		visitado[j]=false;      // marca todos os castelos como não visitados
	    i_caminho=0;                // não tem castelo no caminho ainda

	    pinta(x-1,y-1,c);           // encontra caminho do castelo x ao castelo y e pinta castelos
	}
	// imprime o resultado
	for (i=0; i<n-1; i++)
	    System.out.print(cores[i]+" ");      
	System.out.println(cores[n-1]);      
    }
}

