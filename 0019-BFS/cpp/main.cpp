#include <algorithm>
#include <fstream>
#include <iostream>
#include <numeric>
#include <queue>
#include <vector>

constexpr const char *file_in = "BFS.in";
constexpr const char *file_out = "BFS.out";

void open_filestream_or_fail(std::fstream &fs, const std::string &filename,
                             std::ios_base::openmode mode) {
  fs.open(filename, mode);
  if (!fs.is_open()) {
    std::cerr << "Error: could not open file " << filename << "\n";
    exit(EXIT_FAILURE);
  }
}

int main(int argc, char *argv[]) {
  int n, m, X;
  std::fstream in, out;
  open_filestream_or_fail(in, file_in, std::ios_base::in);
  open_filestream_or_fail(out, file_out, std::ios_base::out);

  if (in >> n >> m >> X) {
    std::vector<int> adj[101];
    bool visited[101];

    for (int i = 0; i < m; ++i) {
      int x, y;
      in >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    } 

    in.close();
    
    for (int i = 0; i < n; i++) {
      std::sort(adj[i].begin(), adj[i].end());
    }
    std::queue<int> q;
    q.push(X);
    visited[X] = true;

    while (!q.empty()) {
      int current = q.front();
      q.pop();
      out << current << " ";

      for (int neighbor : adj[current]) {
        if (!visited[neighbor]){
          q.push(neighbor);
          visited[neighbor] = true;
        } 
      }
    }
    out << "\n";
  } else {
    std::cerr << "Invalid data in " << file_in << "\n";
    exit(EXIT_FAILURE);
  }

  return 0;
}