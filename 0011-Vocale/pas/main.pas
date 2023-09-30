program Vocale;

{$mode objfpc}{$H+}

var
  Input: String[20];
  C: Char;
  
begin
  Readln(Input);
 
  for C in Input do
  begin
    if (Pos(C, 'aeiou') > 0) then 
      Write(UpCase(C)) 
    else 
      Write(C);
  end;

  WriteLn;
end.