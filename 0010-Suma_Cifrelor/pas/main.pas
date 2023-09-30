program SumaCifrelor;

{$mode objfpc}

var
  A, Sum, I: integer;
  
begin
  Readln(A);
  Sum := 0;
  while A > 0 do
  begin
    Sum := Sum + (A Mod 10);
    A := A Div 10;
  end;
  
  Writeln(Sum);
end.