#include <iostream>
using namespace std;
 
int main() {
  int n, m, a, b;
  cin >> n >> m;
  int res[n][2];
  for(int i = 0 ; i < n; i++) {
      res[i][1] = 0;
      res[i][0] = 0;
  }
  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    res[b - 1][0]++;
    res[a - 1][1]++;
  }
  for(int i = 0; i < n; i++) {
    cout << res[i][0] << " " << res[i][1] << endl;
  }
  return 0;
}