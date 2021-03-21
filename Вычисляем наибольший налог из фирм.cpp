#include <fstream>
#include <vector>
using namespace std;

int main() {
  ifstream ifst("input.txt");
  ofstream ofst("output.txt");

  int n;
  ifst >> n;

  vector<int> incomes(n), percent(n);
  for (int i = 0; i < n; ++i) {
    ifst >> incomes[i];
  }
  for (int i = 0; i < n; ++i) {
    ifst >> percent[i];
  }

  int max_pos = 1;
  int max_tax = incomes[max_pos-1] * percent[max_pos-1];

  for (int pos = 2; pos <= n; ++pos) {
    int tax = incomes[pos-1] * percent[pos-1];

    if (tax > max_tax) {
      max_tax = tax;
      max_pos = pos;
    }
  }

  ofst << max_pos;
}
