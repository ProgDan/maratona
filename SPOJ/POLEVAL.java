


		import java.io.*;
		import java.util.*;
		class Main
		{
			
			private static Reader in;
		    private static PrintWriter out;
		    
			static long c[];
			public static void main(String args[])
			throws IOException
			{
				in = new Reader ();
		        out = new PrintWriter (System.out, true);
				
		        int n=0;
		        int count=0;
				while((n=in.nextInt())!=-1)
				{
					count++;
					
					c=new long[n+1];
					
					for(int i=n;i>=0;i--)
						c[i]=in.nextLong();
					
					int k=in.nextInt();
					int x[]=new int[k];
					for(int i=0;i<k;i++)
						x[i]=in.nextInt();
					
					
					System.out.println("Case "+count+":");
					for(int i=0;i<k;i++)
					{
						long sum=0;
						long prod=x[i];
						for(int j=0;j<c.length;j++)
						{
							if(j==0)
								sum+=c[j];
							else
							{
								sum+=c[j]*prod;
								prod*=x[i];
							}
						}
						System.out.println(sum);
					}
					
				}
				out.flush();
				out.close();
			}
			
			
		}
		
		
		/** Faster input **/
		class Reader {
		    final private int BUFFER_SIZE = 1 << 16;private DataInputStream din;private byte[] buffer;private int bufferPointer, bytesRead;
		    public Reader(){din=new DataInputStream(System.in);buffer=new byte[BUFFER_SIZE];bufferPointer=bytesRead=0;}
		    public Reader(String file_name)throws IOException{din=new DataInputStream(new FileInputStream(file_name));buffer=new byte[BUFFER_SIZE];bufferPointer=bytesRead=0;}
		    public String readLine()throws IOException{byte[] buf=new byte[16];int cnt=0,c;
		        while((c=read())!=-1){if(c=='\n')break;buf[cnt++]=(byte)c;}return new String(buf,0,cnt);}
		    public int nextInt()throws IOException{int ret=0;byte c=read();while(c<=' ')c=read();boolean neg=(c=='-');
		        if(neg)c=read();do{ret=ret*10+c-'0';}while((c=read())>='0'&&c<='9');if(neg)return -ret;return ret;} 
		    public long nextLong()throws IOException{long ret=0;byte c=read();while(c<=' ')c=read();boolean neg=(c=='-');
		        if(neg)c=read();do{ret=ret*10+c-'0';}while((c=read())>='0'&&c<='9');if(neg)return -ret;return ret;}
		    public double nextDouble()throws IOException{double ret=0,div=1;byte c=read();while(c<=' ')c=read();boolean neg=(c=='-');if(neg)c = read();do {ret=ret*10+c-'0';}while((c=read())>='0'&&c<='9');
		        if(c=='.')while((c=read())>='0'&&c<='9')ret+=(c-'0')/(div*=10);if(neg)return -ret;return ret;}
		    private void fillBuffer()throws IOException{bytesRead=din.read(buffer,bufferPointer=0,BUFFER_SIZE);if(bytesRead==-1)buffer[0]=-1;}
		    private byte read()throws IOException{if(bufferPointer==bytesRead)fillBuffer();return buffer[bufferPointer++];}
		    public void close()throws IOException{if(din==null) return;din.close();}
		}