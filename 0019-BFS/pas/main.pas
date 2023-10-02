program BFS;

{$mode objfpc}{$H+}

{ Pentru cei pe Turbo Pascal... nu-mi pare rau. ;) }

uses
  fgl,
  SysUtils;

const
  MaxNodes = 100;

type
  generic NodeArray<T> = array[1..MaxNodes] of T;
  TAdjacencyList = specialize TFPGList<integer>;
  TAdjacency = specialize NodeArray<TAdjacencyList>;
  TVisited = specialize NodeArray<boolean>;
  generic TQueue<_T> = class
    Data: array of _T;
    Front, Rear: integer;
  public
    constructor Create;
    procedure Enqueue(const Value: _T);
    function Dequeue: _T;
    function IsEmpty: boolean;
    end;

  constructor TQueue.Create;
    begin
      SetLength(Data, 0);
      Front := 0;
      Rear  := 0;
    end;

  procedure TQueue.Enqueue(const Value: _T);
    begin
      SetLength(Data, Rear + 1);
      Data[Rear] := Value;
      Inc(Rear);
    end;

  function TQueue.Dequeue: _T;
    begin
      Result := Data[Front];
      Inc(Front);
    end;

  function TQueue.IsEmpty: boolean;
    begin
      Result := Front >= Rear;
    end;

type
  TIntegerQueue = specialize TQueue<integer>;

var
  tfIn, tfOut: TextFile;
  adj:     TAdjacency;
  visited: TVisited;
  numNodes, numEdges, startNode, A, B: integer;
  i, current, neighbor: integer;
  queue:   TIntegerQueue;

  function Compare(const A, B: integer): integer;
    begin
      if (A < B) then
        begin
        Result := -1;
        end
      else if (A > B) then
        begin
        Result := 1;
        end
      else
        begin
        Result := 0;
        end;
    end;

  procedure InitializeGraph;
    var
      i: integer;
    begin
      for i := 1 to MaxNodes do
        begin
        adj[i]     := TAdjacencyList.Create;
        visited[i] := False;
        end;
    end;

  procedure AddEdge(const A, B: integer);
    begin
      adj[A].Add(B);
      adj[B].Add(A);
    end;

  procedure BFS(start: integer);
    begin
      queue := TIntegerQueue.Create;
      queue.Enqueue(start);
      visited[start] := True;

      while not queue.IsEmpty do
        begin
        current := queue.Dequeue;
        Write(tfOut, current, ' ');

        for neighbor in adj[current] do
          begin
          if not visited[neighbor] then
            begin
            queue.Enqueue(neighbor);
            visited[neighbor] := True;
            end;
          end;
        end;
    end;

begin
    try
    AssignFile(tfIn, 'BFS.in');
    AssignFile(tfOut, 'BFS.out');

    Reset(tfIn);
    Readln(TFIn, numNodes, numEdges, startNode);

    InitializeGraph;

    for i := 1 to numEdges do
      begin
      Readln(TFIn, A, B);
      AddEdge(A, B);
      end;


    for i := 1 to numNodes do
      begin
      adj[i].Sort(@Compare);
      end;

    CloseFile(tfIn);
    Rewrite(tfOut);
    BFS(startNode);

    Writeln(tfOut);
    CloseFile(tfOut);
    except
    on E: Exception do
      begin
      Writeln('An error has occurred: ', E.Message);
      end;
    end;
end.
