
#include <iostream>
using namespace std;
 
int main() 
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int counter = 0, x;
    for (int j = 0; j < n; j++)
    {
      cin >> x;
      if (x)
        counter += (i == j ? 2 : 1);
    }
    cout << counter << " ";
  }
  return 0;
}