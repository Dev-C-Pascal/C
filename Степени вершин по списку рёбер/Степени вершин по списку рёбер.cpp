#include <iostream>
using namespace std;
 
int main() {
   int n = 0 , m = 0, i, buf;
   cin >> n >> m;
   int *a = new int [n];
   for(i = 0; i < n; a[i] = 0, ++i);
   for(i = 0 , buf; i < 2*m ; cin >> buf, ++a[buf - 1], ++i);
   for(i = 0; i < n; ++i){
        cout << a[i] << endl;
   }
   return 0;
}