#include <iostream>

#include <vector>

using namespace std;

typedef pair<int, int> rb;

int main() {

 vector<rb> lst;

 int n;

cin>>n;

 int a[n][n];

 for (int i=0; i<n; i++) {

   

   for (int j=0; j<n; j++) cin>>a[i][j];

 }

 
for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
        if (a[i][j])
            cout << i + 1 << " " << j + 1 << endl;


  system("pause");

 return 0;

}