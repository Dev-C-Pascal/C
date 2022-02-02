#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,m;
  cin >> m;
  for (int k = 0; k < m; k++)
  {
  cin >> n;
      bool y = false;
  int a[n][n];
  for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
  cin >> a[i][j];
  
  for (int i = 0; i < n; i++)
  {for (int j = 0; j < n; j++)
  {
  if(a[i][j]==a[j][i] && !(i==j && a[i][j]==1)) continue;
  else
  {cout << "NO" << endl;
   y=true; break;} 
  }
   if (y) break;
  }
      if (!y)
  cout << "YES" << endl;
}
}