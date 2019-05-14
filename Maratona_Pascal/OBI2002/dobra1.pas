{ OBI2002            }
{ Tarefa Dobradura   }
{ r. anido           }


program dobra;

var
   n	 : integer;
   teste : integer;
begin
   teste := 1;
   readln(n);
   while n >= 0 do begin
      writeln('Teste ', teste);
      { o compilador gera uma expressao real }
      writeln(trunc(4**(n) + 2**(n+1) + 1));
      writeln;
      inc(teste);
      readln(n);
   end;
end.
