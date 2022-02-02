#include <iostream>
 
 
using namespace std;
 
 
 
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k = 0,size;
    cin >> n;
    int *mas = new int[n*n];
    for (int i = 0; i < n*n; i++) {
        cin >> mas[i];
        if (mas[i] == 1)
            k++;
    }
    
    cout << k << endl;
    system("pause");
    return 0;
 
}

