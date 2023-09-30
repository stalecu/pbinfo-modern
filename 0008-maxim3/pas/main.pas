program Maxim3;

{$mode delphi}

uses
    SysUtils, math;

var
  A, B, C, MaxNum: Integer;
  TFIn, TFOut: TextFile;

begin
  try
    AssignFile(TFIn, 'maxim3.in');
    AssignFile(TFOut, 'maxim3.out');
    
    Reset(TFIn);
    Readln(TFIn, A, B, C);
    CloseFile(TFIn);
    
    MaxNum := Max(A, Max(B, C));
    
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
