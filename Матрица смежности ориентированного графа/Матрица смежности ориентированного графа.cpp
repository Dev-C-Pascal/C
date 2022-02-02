#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,m;
  cin >> n >> m;
  int a[n][n];
  for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
  a[i][j]=0;
  int x,y;
  
  for (int j = 0; j < m; j++)
  {cin >> x >> y;
  x--;
  y--;
  a[x][y]=1;

  }
  for (int i = 0; i < n; i++)
  {for (int j = 0; j < n; j++)
  cout << a[i][j] << " ";
  cout << endl;}
}