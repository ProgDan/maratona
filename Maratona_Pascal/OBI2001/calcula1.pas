(***********
calcula.pas
OBI2001
r. anido
***********)

program calcula;

var 
	num, x, soma: integer;
	i, n: integer;
	
begin
	n := 0;
	
	read(num);
	while num <> 0 do begin
		soma := 0;
		for i:=1 to num do begin
			read(x);
			soma := soma + x;	
		end;
		n := n + 1;
		writeln('Teste ', n);
		writeln(soma);
		writeln;		
		read(num);
	end
end.

