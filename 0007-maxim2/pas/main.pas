program SumaNumere;

{$mode delphi}

uses
    SysUtils, math;

var
  A, B, Sum: Integer;
  TFIn, TFOut: TextFile;

begin
  try
    AssignFile(TFIn, 'maxim.in');
    AssignFile(TFOut, 'maxim.out');
    
    Reset(TFIn);
    Readln(TFIn, A, B);
    CloseFile(TFIn);
    
    Sum := Max(A, B);
    
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
