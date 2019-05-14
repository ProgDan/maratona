(***********
meteoro.pas
OBI2001
r. anido
***********)

program meteoro;

var 
	num_pontos, x, y: integer;
	x1, y1, x2, y2: integer;
	i, num_teste, total: integer;
	
begin
	num_teste := 0;
	
	read(x1, y1, x2, y2);
	while (x1 <> 0) and (x2 <> 0) do begin
		total := 0;
		read(num_pontos);
		for i:=1 to num_pontos do begin
			read(x, y);
			if (x >= x1) and (x <= x2) and (y <= y1) and (y >= y2)	then
				total := total + 1;
		end;
		num_teste := num_teste + 1;
		writeln('Teste ', num_teste);
		writeln(total);
		writeln;		
		read(x1, y1, x2, y2);
	end
end.
