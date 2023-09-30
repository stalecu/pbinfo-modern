program MaxMin;

uses
  math;

var
  A, B, C, MaxNum, MinNum: integer;
  
begin
  read(A); read(B); read(C);
  
  MaxNum := Max(Max(A, B), C);
  MinNum := Min(Min(A, B), C);
  
  writeln(MaxNum - MinNum);
end.