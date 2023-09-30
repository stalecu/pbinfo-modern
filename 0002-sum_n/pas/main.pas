program SumaNNumere;

var
  n, i, numar, suma: integer;
  
begin
  readln(n);
  
  suma := 0;
  
  for i := 1 to n do
  begin
    read(numar);
    suma := suma + numar;
  end;

  writeln(suma);
end.