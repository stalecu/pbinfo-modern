program Maxim2;

{$mode delphi}

uses
    SysUtils, math;

var
  A, B, MaxNum: Integer;
  TFIn, TFOut: TextFile;

begin
  try
    AssignFile(TFIn, 'maxim.in');
    AssignFile(TFOut, 'maxim.out');
    
    Reset(TFIn);
    Readln(TFIn, A, B);
    CloseFile(TFIn);
    
    MaxNum := Max(A, B);
    
    Rewrite(TFOut);
    Writeln(TFOut, MaxNum);
    CloseFile(TFOut);
  except
    on E : Exception do 
    begin
        Writeln('An error has occured: ', E.Message);
    end;
  end;
end.
