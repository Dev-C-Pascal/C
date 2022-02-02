
#include <iostream>
#include <map>
using namespace std;
map <pair<int, int>, int> g;
int main()
{
  int tests;
  cin >> tests;
  while(tests--)
  {
      bool check = false;
      int n,m;
      cin >> n >> m;
      for (int i = 0; i < m; i++)
      {
      int a,b;
      cin >> a >> b;
      if (a>b) swap(a,b);
      g[{a,b}]++;
      if (g[{a, b}] > 1)
      {check = true;}
      }
  if (check) cout << "YES" << endl;
  else
  cout << "NO" << endl;
  g.clear();
  }
}