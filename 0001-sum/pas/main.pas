program SumaNumere;

{$mode delphi}

uses
    SysUtils;

var
  A, B, Sum: Integer;
  TFIn, TFOut: TextFile;

begin
  try
    AssignFile(TFIn, 'sum.in');
    AssignFile(TFOut, 'sum.out');
    
    Reset(TFIn);
    Readln(TFIn, A, B);
    CloseFile(TFIn);
    
    Sum := A + B;
    
    Rewrite(TFOut);
    Writeln(TFOut, Sum);
    CloseFile(TFOut);
  except
    on E : Exception do 
    begin
        Writeln('An error has occured: ', E.Message);
    end;
  end;
end.
