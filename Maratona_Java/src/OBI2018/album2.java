// Guilherme A. Pinto, OBI-2018, album

import java.util.*;
import java.io.*;
import java.lang.*;

public class album_java {
    
    public static void main(String[] args) throws IOException {
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	PrintWriter writer = new PrintWriter(System.out);
	
        String line = in.readLine();    
        StringTokenizer tokenizer = new StringTokenizer(line," ");
        int N = Integer.parseInt(tokenizer.nextToken());

        line = in.readLine();    
        tokenizer = new StringTokenizer(line," ");
	int M = Integer.parseInt(tokenizer.nextToken());

	Set<Integer> album = new HashSet<Integer>();
	
	for ( int i = 0; i < M; i++ ){
	    line = in.readLine();
	    tokenizer = new StringTokenizer(line," ");
	    int fig = Integer.parseInt(tokenizer.nextToken());

	    album.add( fig );
	}
		
	writer.println( N - album.size() );
	writer.close();
    }
}
