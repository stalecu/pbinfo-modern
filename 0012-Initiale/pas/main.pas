program Initiale;

function IsAlphabetic(c: Char): Boolean;
begin
  IsAlphabetic := (c >= 'A') and (c <= 'Z') or (c >= 'a') and (c <= 'z');
end;

function ConvertWord(const WordStr: string): string;
begin
  if Length(WordStr) < 3 then
    ConvertWord := WordStr
  else
    ConvertWord := UpCase(WordStr[1]) + Copy(WordStr, 2, Length(WordStr) - 2) + UpCase(WordStr[Length(WordStr)]);
end;

var
  Input, WordStr, Res: String;
  I: Integer;

begin
  Readln(Input);
  Res := '';
  WordStr := '';

  for I := 1 to Length(Input) do
  begin
    if IsAlphabetic(Input[I]) then
      WordStr := WordStr + Input[I]
    else if WordStr <> '' then
    begin
      Res := Res + ConvertWord(WordStr) + Input[I];
      WordStr := '';
    end
    else
      Res := Res + Input[I];
  end;

  if WordStr <> '' then
    Res := Res + ConvertWord(WordStr);

  WriteLn(Res);
end.