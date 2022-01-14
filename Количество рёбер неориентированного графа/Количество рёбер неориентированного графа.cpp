#include <iostream>
 
    using namespace std;
 
int main() {
    int n, k;
    cin >> n;
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
           if (a[i][j] == 1) {
               k++;
           }
        }
    }
    cout << k << "\n";
    for (int i = 0; i < n; i++) {
        delete [] a[i];
    }
    delete [] a;
    return 0;
}
