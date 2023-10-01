program NumarulDeDivizori;

{$mode objfpc}

uses
    SysUtils;

var
  A, Divisor, Count: Integer;
  TFIn, TFOut: TextFile;

begin
  try
    AssignFile(TFIn, 'nrdiv.in');
    AssignFile(TFOut, 'nrdiv.out');
    
    Reset(TFIn);
    Readln(TFIn, A);
    CloseFile(TFIn);
    
    Count := 0;
    for Divisor := 1 to A do
    begin
      if A mod Divisor = 0 then Inc(Count);
    end;
    
    Rewrite(TFOut);
    Writeln(TFOut, Count);
    CloseFile(TFOut);
  except
    on E : Exception do 
    begin
        Writeln('An error has occured: ', E.Message);
    end;
  end;
end.
