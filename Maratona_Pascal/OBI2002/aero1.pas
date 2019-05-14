{ OBI2002            }
{ Tarefa Aero        }
{ r. anido           }

program aero;

const
   MAXA =  10000;
var
   voos	     : array[1..MAXA] of integer;
   i, x, y   : integer;
   a, v, max : integer;
   teste     : integer;
begin
   teste := 1;
   readln(a, v);
   while a <> 0 do begin
   { inicializa numero de voos de todos os aeroportos }
      for i:= 1 to a do
	 voos[i] := 0;
      { para cada voo, incrementa numero de voos para os
        aeroportos correspondentes }
      for i:= 1 to v do begin
	 readln(x, y);
	 inc(voos[x]);
	 inc(voos[y]);
      end;
      { determina qual o maior numero de voos existente }
      max := 0;
      for i := 1 to a do
	 if voos[i] > max then max := voos[i];
      writeln('Teste ', teste);
      inc(teste);
      { imprime todos os aeroportos com numero maximo de voos }
      for i := 1 to a do
	 if voos[i] = max then write(i, ' ');
      writeln;
      readln(a, v);
   end;
end.
