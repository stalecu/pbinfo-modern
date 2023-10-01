program Initiale;

{$mode objfpc}{$H+}

function Substr(constref input: string; position, len: integer): string;
begin
  Substr := Copy(input, position, len);
end;

var
  Input: string;
  I: integer;
begin
  Readln(Input);

  for I := 0 to Length(Input) - 1 do
  begin
    Writeln(Substr(Input, 0, Length(Input) - I));
  end;

  for I := Length(Input) - 1 downto 0 do
  begin
    Writeln(Substr(Input, Length(Input) - I, I + 1));
  end;
end.